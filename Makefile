# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sbos <sbos@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/04 14:13:55 by sbos          #+#    #+#                  #
#    Updated: 2022/07/22 11:48:10 by sbos          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

################################################################################

SOURCES +=\
	src/char/ft_char_to_digit.c\
	src/char/ft_char_to_str.c\
	src/char/ft_is_lower.c\
	src/char/ft_is_upper.c\
	src/char/ft_isalnum.c\
	src/char/ft_isalpha.c\
	src/char/ft_isascii.c\
	src/char/ft_isdigit.c\
	src/char/ft_isprint.c\
	src/char/ft_isspace.c\
	src/char/ft_tolower.c\
	src/char/ft_toupper.c

SOURCES +=\
	src/file/ft_read_grid_from_file_utils.c\
	src/file/ft_read_grid_from_file.c

SOURCES +=\
	src/gnl/get_next_line_utils.c\
	src/gnl/get_next_line.c

SOURCES +=\
	src/lst/ft_lst_content_size.c\
	src/lst/ft_lst_new_back.c\
	src/lst/ft_lst_new_front.c\
	src/lst/ft_lst_reverse.c\
	src/lst/ft_lst_to_array.c\
	src/lst/ft_lstadd_back.c\
	src/lst/ft_lstadd_front.c\
	src/lst/ft_lstclear.c\
	src/lst/ft_lstdelone.c\
	src/lst/ft_lstiter.c\
	src/lst/ft_lstlast.c\
	src/lst/ft_lstmap.c\
	src/lst/ft_lstnew.c\
	src/lst/ft_lstsize.c

SOURCES +=\
	src/mem/ft_bzero.c\
	src/mem/ft_calloc.c\
	src/mem/ft_free_mallocs.c\
	src/mem/ft_free.c\
	src/mem/ft_malloc.c\
	src/mem/ft_memchr.c\
	src/mem/ft_memcmp.c\
	src/mem/ft_memcpy.c\
	src/mem/ft_memmove.c\
	src/mem/ft_memset.c\
	src/mem/ft_realloc.c\
	src/mem/ft_write.c

SOURCES +=\
	src/nbr/ft_atoi_range.c\
	src/nbr/ft_atoi_safe.c\
	src/nbr/ft_atoi.c\
	src/nbr/ft_digit_to_char_base.c\
	src/nbr/ft_digit_to_char.c\
	src/nbr/ft_get_digit_count_base_unsigned.c\
	src/nbr/ft_get_digit_count_base.c\
	src/nbr/ft_get_digit_count.c\
	src/nbr/ft_itoa.c\
	src/nbr/ft_max.c\
	src/nbr/ft_min.c\
	src/nbr/ft_nbr_to_str.c\
	src/nbr/ft_unsigned_nbr_to_str.c

SOURCES +=\
	src/print/ft_print_fd.c\
	src/print/ft_print.c\
	src/print/ft_put_substr_fd.c\
	src/print/ft_put_substr.c\
	src/print/ft_putchar_fd.c\
	src/print/ft_putchar.c\
	src/print/ft_putendl_fd.c\
	src/print/ft_putendl.c\
	src/print/ft_putnbr_fd.c\
	src/print/ft_putnbr.c\
	src/print/ft_putstr_fd.c\
	src/print/ft_putstr.c

SOURCES +=\
	src/str/ft_chr_in_str.c\
	src/str/ft_chr_repeat.c\
	src/str/ft_empty_str_assign.c\
	src/str/ft_empty_str.c\
	src/str/ft_free_split.c\
	src/str/ft_rejoin_split.c\
	src/str/ft_split_str.c\
	src/str/ft_split.c\
	src/str/ft_str_assign.c\
	src/str/ft_str_count_chr.c\
	src/str/ft_str_count_str_overlap.c\
	src/str/ft_str_count_str.c\
	src/str/ft_str_lower.c\
	src/str/ft_str_eq.c\
	src/str/ft_str_is_empty.c\
	src/str/ft_str_not_chr.c\
	src/str/ft_str_not_str.c\
	src/str/ft_str_repeat.c\
	src/str/ft_str_replace.c\
	src/str/ft_str_upper.c\
	src/str/ft_stralloc.c\
	src/str/ft_strchr.c\
	src/str/ft_strcmp.c\
	src/str/ft_strdup.c\
	src/str/ft_striteri.c\
	src/str/ft_strjoin.c\
	src/str/ft_strlcat.c\
	src/str/ft_strlcpy.c\
	src/str/ft_strlen.c\
	src/str/ft_strmapi.c\
	src/str/ft_strncmp.c\
	src/str/ft_strnlen.c\
	src/str/ft_strnstr.c\
	src/str/ft_strrchr.c\
	src/str/ft_strstr.c\
	src/str/ft_strtrim.c\
	src/str/ft_strtrim_whitespace.c\
	src/str/ft_substr.c

SOURCES +=\
	src/vector/ft_vector.c

SOURCES +=\
	src/error/ft_any_error.c\
	src/error/ft_get_error_ptr.c\
	src/error/ft_get_error.c\
	src/error/ft_print_error.c\
	src/error/ft_set_error.c

################################################################################

HEADERS +=\
	helper_headers/boolean_operators.h\
	helper_headers/ft_helper_headers.h\
	helper_headers/ft_iterators.h\
	helper_headers/ft_types.h\
	helper_headers/shared_system_headers.h\
	helper_headers/whitespace.h

HEADERS +=\
	src/char/ft_char.h\
	src/error/ft_error.h\
	src/file/ft_file.h\
	src/gnl/ft_gnl.h\
	src/gnl/get_next_line.h\
	src/lst/ft_lst.h\
	src/mem/ft_malloced.h\
	src/mem/ft_mem.h\
	src/misc/ft_misc.h\
	src/nbr/ft_nbr.h\
	src/print/ft_print.h\
	src/str/ft_str.h\
	src/vector/ft_vector.h

HEADERS +=\
	libft.h

################################################################################

NAME := libft.a

CC := cc

SRC_DIR := src
OBJ_DIR := obj

CFLAGS := -Wall -Wextra -Werror
CFLAGS += -O3

INCLUDES_HEADERS += libft.h

################################################################################

LIBS :=

################################################################################

FCLEANED_FILES := $(NAME)

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
INCLUDES_HEADERS += ../libctester/src/ctester_globals.h
CFLAGS += -DCTESTER=
endif

OBJECT_PATHS := $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(SOURCES:.c=.o))

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
