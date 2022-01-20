################################################################################################################################


# RUN TESTERS

# TODO: Add grep for KOs so they are much easier to spot

# cd testers && cd libft-unit-test && make f && cd ../libftTester && make && cd ../..

# cd .. && make remove_bonus_suffix && cd libft-war-machine && sh grademe.sh && sh grademe.sh


################################################################################################################################


# CLONE TESTERS FOR EVAL

# 1. git clone https://github.com/alelievr/libft-unit-test && git clone https://github.com/ska42/libft-war-machine && git clone https://github.com/Tripouille/libftTester.git


################################################################################################################################


# RUN TESTERS FOR EVAL


## LIBFT-UNIT-TEST

# 2. TODO: Open libft-unit-test/Makefile and change LIBFTDIR = ../libft to LIBFTDIR = ../

# 3. cd libft-unit-test && make && ./run_test


## LIBFTTESTER

# 4. cd ../libftTester && make


## LIBFT-WAR-MACHINE

# 5. TODO: Manually remove _bonus from the filenames under BONUS_SOURCES in this file
# 6. cd .. && make remove_bonus_suffix && cd libft-war-machine && sh grademe.sh && sh grademe.sh


################################################################################################################################


include sources.mk

NAME := libft.a

CC := cc

SRC_DIR := src
OBJ_DIR := obj

CFLAGS := -Wall -Wextra -Werror
#CFLAGS += -O1 # -O1 adds tail recursion detection, which I need, so we might as well turn the optimizing up to 11 with -O3

HEADERS := libft.h


################################################################################################################################


FCLEANED_FILES := $(NAME)


# DEBUG is set to 1 when tester.mk includes this file
ifdef DEBUG
CFLAGS += -g3 -Wconversion -I$(CRITERION_DIR)/include
FCLEANED_FILES += $(TEST_NAME)
endif

ifdef SAN
CFLAGS += -fsanitize=address
endif

# Causes tester.c to run its own main(), instead of letting the unit tester Criterion use its own main()
# This is necessary as Criterion doesn't run the leaks program hooked to its POST_FINI event if an assert fails, while it should
ifdef CUSTOM_MAIN
CFLAGS += -DCUSTOM_MAIN=1
endif

OBJECT_PATHS := $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(SOURCES:.c=.o))

# sort removes duplicates
INCLUDES := $(addprefix -I, $(sort $(dir $(HEADERS))))

# Only cleans when MAKE_DATA changes.
DATA_FILE := .make_data
MAKE_DATA := $(CFLAGS) $(SOURCES)
PRE_RULES :=
ifneq ($(shell echo "$(MAKE_DATA)"), $(shell cat "$(DATA_FILE)" 2> /dev/null))
PRE_RULES += clean
endif


################################################################################################################################


all: $(PRE_RULES) $(NAME)

$(NAME): $(OBJECT_PATHS)
	ar rcs $(NAME) $(OBJECT_PATHS)
	@echo "$(MAKE_DATA)" > $(DATA_FILE)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

debug:
	@$(MAKE) DEBUG=1 all

clean:
	rm -rf $(OBJ_DIR)/

fclean: clean
	rm -f $(FCLEANED_FILES)

tester:
	make -f tester.mk tester
	./tester

re: fclean all


################################################################################################################################


.PHONY: all debug clean fclean re tester
