# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sbos <sbos@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/04 14:13:55 by sbos          #+#    #+#                  #
#    Updated: 2022/06/21 13:13:11 by sbos          ########   odam.nl          #
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
	src/file/ft_read_grid_from_file.c

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
	src/mem/ft_free.c\
	src/mem/ft_memchr.c\
	src/mem/ft_memcmp.c\
	src/mem/ft_memcpy.c\
	src/mem/ft_memmove.c\
	src/mem/ft_memset.c

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

################################################################################

NAME := libft.a

CC := cc

SRC_DIR := src
OBJ_DIR := obj

CFLAGS := -Wall -Wextra -Werror

HEADERS := libft.h

################################################################################

GET_NEXT_LINE_PATH := ./get_next_line
GET_NEXT_LINE_LIB_PATH := $(GET_NEXT_LINE_PATH)/libget_next_line.a
GET_NEXT_LINE := -L$(GET_NEXT_LINE_PATH) -lget_next_line

LIBS := $(GET_NEXT_LINE)

################################################################################

FCLEANED_FILES := $(NAME)

# DEBUG is set to 1 when tester.mk includes this file
ifdef DEBUG
CFLAGS += -DSTATIC=
CFLAGS += -g3 -Wconversion
CFLAGS += -Wno-nullability-completeness # Needed for intercepting stdlib.h
endif

ifdef SAN
CFLAGS += -fsanitize=address
endif

OBJECT_PATHS := $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(SOURCES:.c=.o))

# sort removes duplicates
INCLUDES := $(addprefix -I, $(sort $(dir $(HEADERS))) $(GET_NEXT_LINE_PATH))

# Only cleans when MAKE_DATA changes.
DATA_FILE := .make_data
MAKE_DATA := $(CFLAGS) $(SOURCES)
PRE_RULES :=
ifneq ($(shell echo "$(MAKE_DATA)"), $(shell cat "$(DATA_FILE)" 2> /dev/null))
PRE_RULES += clean
endif

################################################################################

.PHONY: all
all: $(PRE_RULES) $(GET_NEXT_LINE_LIB_PATH) $(NAME)

################################################################################

$(GET_NEXT_LINE_LIB_PATH):
	$(MAKE) -C $(GET_NEXT_LINE_PATH)

################################################################################

$(NAME): $(OBJECT_PATHS)
	cp $(GET_NEXT_LINE_LIB_PATH) $(NAME)
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
	$(MAKE) -C $(GET_NEXT_LINE_PATH) clean

.PHONY: fclean
fclean: clean
	rm -f $(FCLEANED_FILES)
	$(MAKE) -C $(GET_NEXT_LINE_PATH) fclean

.PHONY: re
re: fclean all

################################################################################
