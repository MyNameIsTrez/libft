# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sbos <sbos@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/04 14:13:55 by sbos          #+#    #+#                  #
#    Updated: 2022/09/01 16:42:12 by sbos          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

################################################################################

NAME := libft.a

CC := cc

SRC_DIR := ./src
OBJ_DIR := ./obj

CFLAGS := -Wall -Wextra -Werror -Wconversion -Wpedantic -Wfatal-errors

INCLUDES_HEADERS += libft.h

################################################################################

# SOURCES += $(shell find ./src -type f -name "*.c")

SOURCES +=\
	./src/allocating/private/ft_free/free_malloc_ptr.c\
	./src/allocating/private/ft_malloc/register_malloc/grow_malloc_ptrs.c\
	./src/allocating/private/ft_malloc/_recalloc.c\
	./src/allocating/private/ft_malloc/register_malloc.c\
	./src/allocating/private/_calloc.c\
	./src/allocating/private/get_malloced.c\
	./src/allocating/ft_calloc.c\
	./src/allocating/ft_free.c\
	./src/allocating/ft_free_allocations.c\
	./src/allocating/ft_get_allocation_count.c\
	./src/allocating/ft_malloc.c\
	./src/allocating/ft_recalloc.c\
	./src/allocating/ft_remalloc.c\
	./src/char/ft_char_to_digit.c\
	./src/char/ft_char_to_str.c\
	./src/char/ft_is_lower.c\
	./src/char/ft_is_upper.c\
	./src/char/ft_isalnum.c\
	./src/char/ft_isalpha.c\
	./src/char/ft_isascii.c\
	./src/char/ft_isdigit.c\
	./src/char/ft_isprint.c\
	./src/char/ft_isspace.c\
	./src/char/ft_tolower.c\
	./src/char/ft_toupper.c\
	./src/deque/back/ft_deque_back.c\
	./src/deque/back/ft_deque_pop_back.c\
	./src/deque/back/ft_deque_push_back.c\
	./src/deque/front/ft_deque_front.c\
	./src/deque/front/ft_deque_pop_front.c\
	./src/deque/front/ft_deque_push_front.c\
	./src/deque/private/deque_at_wrapping.c\
	./src/deque/private/deque_get_wrapped_index.c\
	./src/deque/ft_deque_at.c\
	./src/deque/ft_deque_new_reserved.c\
	./src/deque/ft_deque_size.c\
	./src/error/ft_any_error.c\
	./src/error/ft_get_error.c\
	./src/error/ft_get_error_ptr.c\
	./src/error/ft_print_error.c\
	./src/error/ft_set_error.c\
	./src/file/private/helper_read_into_lst.c\
	./src/file/private/read_into_lst.c\
	./src/file/private/transfer_lst_to_cells.c\
	./src/file/ft_read_grid_from_file.c\
	./src/gnl/private/get_next_line_utils.c\
	./src/gnl/get_next_line_without_newline.c\
	./src/gnl/get_next_line.c\
	./src/iterator/ft_get_array_iterator.c\
	./src/iterator/ft_get_count_iterator.c\
	./src/iterator/ft_get_iterator.c\
	./src/iterator/ft_get_range_iterator.c\
	./src/iterator/ft_get_step_range_iterator.c\
	./src/iterator/ft_get_vector_iterator.c\
	./src/iterator/ft_init_it.c\
	./src/iterator/ft_iterate.c\
	./src/lst/ft_lst_content_size.c\
	./src/lst/ft_lst_new_back.c\
	./src/lst/ft_lst_new_front.c\
	./src/lst/ft_lst_remove_if.c\
	./src/lst/ft_lst_reverse.c\
	./src/lst/ft_lst_to_array.c\
	./src/lst/ft_lstadd_back.c\
	./src/lst/ft_lstadd_front.c\
	./src/lst/ft_lstclear.c\
	./src/lst/ft_lstdelone.c\
	./src/lst/ft_lstiter.c\
	./src/lst/ft_lstlast.c\
	./src/lst/ft_lstmap.c\
	./src/lst/ft_lstnew.c\
	./src/lst/ft_lstsize.c\
	./src/mem/ft_bzero.c\
	./src/mem/ft_mem_equal.c\
	./src/mem/ft_memchr.c\
	./src/mem/ft_memcmp.c\
	./src/mem/ft_memcpy.c\
	./src/mem/ft_memmove.c\
	./src/mem/ft_memset.c\
	./src/mem/ft_memset_struct.c\
	./src/mem/ft_write.c\
	./src/nbr/ft_atoi.c\
	./src/nbr/ft_bubble_sort.c\
	./src/nbr/ft_atoi_range.c\
	./src/nbr/ft_atoi_safe.c\
	./src/nbr/ft_digit_to_char.c\
	./src/nbr/ft_digit_to_char_base.c\
	./src/nbr/ft_get_digit_count.c\
	./src/nbr/ft_get_digit_count_base.c\
	./src/nbr/ft_get_digit_count_base_unsigned.c\
	./src/nbr/ft_itoa.c\
	./src/nbr/ft_max_int.c\
	./src/nbr/ft_max_size.c\
	./src/nbr/ft_min_int.c\
	./src/nbr/ft_min_size.c\
	./src/nbr/ft_nbr_to_str.c\
	./src/nbr/ft_strtof.c\
	./src/nbr/ft_unsigned_nbr_to_str.c\
	./src/print/ft_print.c\
	./src/print/ft_print_fd.c\
	./src/print/ft_put_substr.c\
	./src/print/ft_put_substr_fd.c\
	./src/print/ft_putchar.c\
	./src/print/ft_putchar_fd.c\
	./src/print/ft_putendl.c\
	./src/print/ft_putendl_fd.c\
	./src/print/ft_putnbr.c\
	./src/print/ft_putnbr_fd.c\
	./src/print/ft_putstr.c\
	./src/print/ft_putstr_fd.c\
	./src/str/ft_chr_in_str.c\
	./src/str/ft_chr_repeat.c\
	./src/str/ft_empty_str.c\
	./src/str/ft_empty_str_assign.c\
	./src/str/ft_free_split.c\
	./src/str/ft_rejoin_split.c\
	./src/str/ft_split.c\
	./src/str/ft_split_str.c\
	./src/str/ft_str_assign.c\
	./src/str/ft_str_count_chr.c\
	./src/str/ft_str_count_str.c\
	./src/str/ft_str_count_str_overlap.c\
	./src/str/ft_str_ends_with.c\
	./src/str/ft_str_eq.c\
	./src/str/ft_str_is_empty.c\
	./src/str/ft_str_lower.c\
	./src/str/ft_str_not_chr.c\
	./src/str/ft_str_not_set.c\
	./src/str/ft_str_not_str.c\
	./src/str/ft_str_repeat.c\
	./src/str/ft_str_replace.c\
	./src/str/ft_str_starts_with.c\
	./src/str/ft_str_upper.c\
	./src/str/ft_stralloc.c\
	./src/str/ft_strchr.c\
	./src/str/ft_strcmp.c\
	./src/str/ft_strdup.c\
	./src/str/ft_strjoin_and_free_left.c\
	./src/str/ft_strjoin_array.c\
	./src/str/ft_striteri.c\
	./src/str/ft_strjoin.c\
	./src/str/ft_strlcat.c\
	./src/str/ft_strlcpy.c\
	./src/str/ft_strlen.c\
	./src/str/ft_strmapi.c\
	./src/str/ft_strncmp.c\
	./src/str/ft_strnlen.c\
	./src/str/ft_strnstr.c\
	./src/str/ft_strrchr.c\
	./src/str/ft_strset.c\
	./src/str/ft_strstr.c\
	./src/str/ft_strtrim.c\
	./src/str/ft_strtrim_whitespace.c\
	./src/str/ft_substr.c\
	./src/vector/private/metadata/metadata_getters/get_metadata_ptr.c\
	./src/vector/private/metadata/metadata_getters/get_vector_of_metadata.c\
	./src/vector/private/metadata/metadata_getters/get_vector_of_metadata_ptr.c\
	./src/vector/private/metadata/try_init_vector_of_metadata_ptr.c\
	./src/vector/private/vector_push/add_vector_value.c\
	./src/vector/private/get_bytes_after_metadata.c\
	./src/vector/private/is_bookkeeping_vector.c\
	./src/vector/private/vector_register.c\
	./src/vector/ft_vector_back.c\
	./src/vector/ft_vector_clean_up.c\
	./src/vector/ft_vector_copy.c\
	./src/vector/ft_vector_free.c\
	./src/vector/ft_vector_from_deque.c\
	./src/vector/ft_vector_get_capacity.c\
	./src/vector/ft_vector_get_element_size.c\
	./src/vector/ft_vector_get_size.c\
	./src/vector/ft_vector_new.c\
	./src/vector/ft_vector_new_reserved.c\
	./src/vector/ft_vector_pop_back.c\
	./src/vector/ft_vector_push.c\
	./src/vector/ft_vector_push_new_vector.c\
	./src/vector/ft_vector_reserve.c\
	./src/vector/ft_vector_swap_remove.c

################################################################################

# HEADERS += $(shell find ./src -type f -name "*.h")

HEADERS +=\
	./src/allocating/private/ft_free/ft_private_ft_free.h\
	./src/allocating/private/ft_malloc/register_malloc/ft_private_register_malloc.h\
	./src/allocating/private/ft_malloc/ft_private_ft_malloc.h\
	./src/allocating/private/ft_private_mem_allocating.h\
	./src/allocating/ft_allocating.h\
	./src/char/ft_char.h\
	./src/error/ft_error.h\
	./src/file/private/ft_private_file.h\
	./src/file/ft_file.h\
	./src/gnl/private/gnl_private.h\
	./src/gnl/get_next_line.h\
	./src/helper_headers/ft_defines.h\
	./src/helper_headers/ft_helper_headers.h\
	./src/helper_headers/ft_shared_system_headers.h\
	./src/helper_headers/ft_types.h\
	./src/iterator/private/ft_iterator_status_struct.h\
	./src/iterator/private/ft_iterator_struct.h\
	./src/iterator/private/ft_iterator_utils.h\
	./src/iterator/ft_iterator.h\
	./src/lst/ft_lst.h\
	./src/mem/ft_mem.h\
	./src/nbr/ft_nbr.h\
	./src/print/ft_print.h\
	./src/str/ft_str.h\
	./src/vector/private/metadata/metadata_getters/ft_private_vector_metadata_getters.h\
	./src/vector/private/metadata/ft_private_vector_metadata.h\
	./src/vector/private/vector_push/ft_private_vector_push.h\
	./src/vector/private/ft_private_vector.h\
	./src/vector/private/ft_private_vector_metadata_struct.h\
	./src/vector/ft_vector.h

################################################################################

FCLEANED_FILES := $(NAME)

################################################################################

# DEBUG is set to 1 when libctester includes this file
ifdef DEBUG
CFLAGS += -DDEBUG=1
CFLAGS += -g3
endif

ifdef SAN
CFLAGS += -fsanitize=address
endif

ifdef CTESTER
INCLUDES_HEADERS += /Users/sbos/Documents/Programming/libctester/src/ctester_globals.h
CFLAGS += -DCTESTER=1
endif

ifdef O3
CFLAGS += -O3
endif

################################################################################

OBJECT_PATHS := $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(SOURCES:.c=.o))

HEADERS += $(INCLUDES_HEADERS)

# sort removes duplicates
INCLUDES := $(addprefix -I, $(sort $(dir $(INCLUDES_HEADERS)) src))

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
	@ar rcs $(NAME) $(OBJECT_PATHS)
	@echo "$(MAKE_DATA)" > $(DATA_FILE)
	@echo Compiled libft

################################################################################

define tidy_compilation
	@printf "%s\e[K\n" "$(1)"
	@$(1)
	@printf "\e[A\e[K"
endef

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	@mkdir -p $(@D)
	@$(call tidy_compilation,$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@)

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
