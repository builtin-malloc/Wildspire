################################################################################
## CONFIG ######################################################################
################################################################################

PROJECT_NAME	:= Wildspire
PROJECT_VERSION	:= 0.1.0
PROJECT_BUILD	?= debug

################################################################################
## FILES #######################################################################
################################################################################

BINDIR	:= bin
OBJDIR	:= obj
SRCDIR	:= src
LIBDIR	:= lib
RESDIR	:= res

SRC		:= $(wildcard $(SRCDIR)/*.c)
OBJ		:= $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
DEP		:= $(OBJ:.o=.d)
BIN		:= $(BINDIR)/$(PROJECT_NAME)
LIBSRC	:= $(wildcard $(LIBDIR)/*.a)
LIBS	:= $(LIBSRC:$(LIBDIR)/%=$(BINDIR)/%)

CONFIG_H	:= $(SRCDIR)/config.h

################################################################################
## COMPILER ####################################################################
################################################################################

CC		?= gcc-13
CCLD	?= $(CC)

CFLAGS	:= -std=c2x -MMD -g -Wall -Wextra -Wpedantic -I$(SRCDIR) -I$(LIBDIR)
LDFLAGS	:= -L$(BINDIR) -lglfw3 -lglad -lm

ifeq ($(PROJECT_BUILD),debug)
CFLAGS	+= -O0
endif
ifeq ($(PROJECT_BUILD),release)
CFLAGS	+= -O3 -DNDEBUG
endif

################################################################################
## COMMANDS ####################################################################
################################################################################

RM_RF	:= rm -rf
RM_F	:= rm -f
MKDIR_P	:= mkdir -p
ECHO	:= echo
CP		:= cp
CD		:= cd

################################################################################
## TARGETS #####################################################################
################################################################################

.PHONY: all
all: $(BIN)

$(BIN): $(OBJ) | $(BINDIR) $(LIBS)
	$(CCLD) -o $@ $^ $(LDFLAGS)

$(OBJ): $(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR) $(CONFIG_H)
	$(CC) -o $@ -c $< $(CFLAGS)

$(LIBS): $(BINDIR)/%: $(LIBDIR)/% | $(BINDIR)
	$(CP) $< $@

$(BINDIR) $(OBJDIR):
	$(MKDIR_P) $@

$(CONFIG_H): Makefile
	@$(ECHO) "echo ... > $@"
	@$(ECHO) "#ifndef WILDSPIRE_CONFIG_H" >  $@
	@$(ECHO) "#define WILDSPIRE_CONFIG_H" >> $@
	@$(ECHO) >> $@
	@$(ECHO) "constexpr const char wildspire__PROJECT_NAME[]    = \"$(PROJECT_NAME)\";" >> $@
	@$(ECHO) "constexpr const char wildspire__PROJECT_VERSION[] = \"$(PROJECT_VERSION)\";" >> $@
	@$(ECHO) "constexpr const char wildspire__PROJECT_BUILD[]   = \"$(PROJECT_BUILD)\";" >> $@
	@$(ECHO) >> $@
	@$(ECHO) "#endif // WILDSPIRE_CONFIG_H" >> $@

-include $(DEP)


.PHONY: run
run: $(BIN)
	$(CD) $(BINDIR) ; ./$(PROJECT_NAME)


.PHONY: clean mrproper
clean:
	$(RM_F) $(BIN)
	$(RM_RF) $(OBJDIR)
mrproper:
	$(RM_RF) $(BINDIR)
	$(RM_RF) $(OBJDIR)
