# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sbos <sbos@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/04 14:13:55 by sbos          #+#    #+#                  #
#    Updated: 2022/02/04 17:52:40 by sbos          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

################################################################################

include sources.mk

NAME := libft.a

CC := cc

SRC_DIR := src
OBJ_DIR := obj

CFLAGS := -Wall -Wextra -Werror

HEADERS := libft.h

################################################################################

FCLEANED_FILES := $(NAME)

# DEBUG is set to 1 when tester.mk includes this file
ifdef DEBUG
CFLAGS += -g3 -Wconversion -I$(CRITERION_DIR)/include
FCLEANED_FILES += $(TEST_NAME)
endif

ifdef SAN
CFLAGS += -fsanitize=address
endif

# Causes tester.c to run its own main(), instead of letting the unit tester
# Criterion use its own main()
# This is necessary as Criterion doesn't run the leaks program
# hooked to its POST_FINI event if an assert fails, while it should
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

################################################################################

all: $(PRE_RULES) $(NAME)

$(NAME): $(OBJECT_PATHS)
	ar rcs $(NAME) $(OBJECT_PATHS)
	@echo "$(MAKE_DATA)" > $(DATA_FILE)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

bonus: # This is just here so libftTester doesn't throw an error.

debug:
	@$(MAKE) DEBUG=1 all

clean:
	rm -rf $(OBJ_DIR)/

fclean: clean
	rm -f $(FCLEANED_FILES)

re: fclean all

################################################################################

.PHONY: all debug clean fclean re

################################################################################
