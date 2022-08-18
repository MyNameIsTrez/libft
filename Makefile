# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sbos <sbos@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/04 14:13:55 by sbos          #+#    #+#                  #
#    Updated: 2022/08/18 13:43:15 by sbos          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

################################################################################

NAME := libft.a

CC := cc

SRC_DIR := ./src
OBJ_DIR := ./obj

CFLAGS := -Wall -Wextra -Werror -pedantic-errors -Werror-pointer-arith

INCLUDES_HEADERS += libft.h

################################################################################

# TODO: Replace with hardcoded sources before handing in
SOURCES += $(shell find ./src -type f -name "*.c")

################################################################################

# TODO: Move helper_headers into libft/src
HEADERS +=\
	helper_headers/ft_boolean_operators.h\
	helper_headers/ft_helper_headers.h\
	helper_headers/ft_open_fd_max.h\
	helper_headers/ft_types.h\
	helper_headers/ft_shared_system_headers.h\
	helper_headers/ft_whitespace.h

# TODO: Replace with hardcoded headers before handing in
HEADERS += $(shell find ./src -type f -name "*.h")

################################################################################

FCLEANED_FILES := $(NAME)

################################################################################

# DEBUG is set to 1 when libctester includes this file
ifdef DEBUG
CFLAGS += -DDEBUG=

CFLAGS += -DSTATIC=
CFLAGS += -g3 -Wconversion
endif

ifdef SAN
CFLAGS += -fsanitize=address
endif

ifdef CTESTER
INCLUDES_HEADERS += /Users/sbos/Documents/Programming/libctester/src/ctester_globals.h
CFLAGS += -DCTESTER=
endif

ifdef O3
CFLAGS += -O3
endif

################################################################################

OBJECT_PATHS := $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(SOURCES:.c=.o))

HEADERS += $(INCLUDES_HEADERS)

# sort removes duplicates
INCLUDES := $(addprefix -I, $(sort $(dir $(INCLUDES_HEADERS))))

# Only cleans when MAKE_DATA changes.
DATA_FILE := .make_data
MAKE_DATA := $(CFLAGS) $(SOURCES)
PRE_RULES :=
ifneq ($(shell echo "$(MAKE_DATA)"), $(shell cat "$(DATA_FILE)" 2> /dev/null))
PRE_RULES += clean
endif

################################################################################

.PHONY: all
all: $(PRE_RULES) $(NAME)

################################################################################

$(NAME): $(OBJECT_PATHS)
	ar rcs $(NAME) $(OBJECT_PATHS)
	@echo "$(MAKE_DATA)" > $(DATA_FILE)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

################################################################################

.PHONY: debug
debug:
	@$(MAKE) DEBUG=1 all

.PHONY: clean
clean:
	rm -rf $(OBJ_DIR)

.PHONY: fclean
fclean: clean
	rm -f $(FCLEANED_FILES)

.PHONY: re
re: fclean all

################################################################################
