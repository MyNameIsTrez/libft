# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    sources.mk                                         :+:    :+:             #
#                                                      +:+                     #
#    By: sbos <sbos@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/04 14:14:02 by sbos          #+#    #+#                  #
#    Updated: 2022/02/16 12:43:34 by sbos          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

################################################################################

CHAR_SOURCES :=	$(addprefix src/char/,	\
	ft_char_to_digit.c					\
	ft_char_to_str.c					\
	ft_is_lower.c						\
	ft_is_upper.c						\
	ft_isalnum.c						\
	ft_isalpha.c						\
	ft_isascii.c						\
	ft_isdigit.c						\
	ft_isprint.c						\
	ft_isspace.c						\
	ft_tolower.c						\
	ft_toupper.c						\
)

IO_SOURCES := $(addprefix src/io/,		\
	ft_print.c							\
	ft_putchar_fd.c						\
	ft_putendl_fd.c						\
	ft_putnbr_fd.c						\
	ft_putstr_fd.c						\
)

LST_SOURCES := $(addprefix src/lst/,	\
	ft_lst_content_size.c				\
	ft_lst_new_back.c					\
	ft_lst_new_front.c					\
	ft_lstadd_back.c					\
	ft_lstadd_front.c					\
	ft_lstclear.c						\
	ft_lstdelone.c						\
	ft_lstiter.c						\
	ft_lstlast.c						\
	ft_lstmap.c							\
	ft_lstnew.c							\
	ft_lstsize.c						\
)

MEM_SOURCES := $(addprefix src/mem/,	\
	ft_bzero.c							\
	ft_calloc.c							\
	ft_free.c							\
	ft_memchr.c							\
	ft_memcmp.c							\
	ft_memcpy.c							\
	ft_memmove.c						\
	ft_memset.c							\
)
# ft_nd_array.c						\

NBR_SOURCES := $(addprefix src/nbr/,	\
	ft_atoi.c							\
	ft_digit_to_char_base.c				\
	ft_digit_to_char.c					\
	ft_get_digit_count_base_unsigned.c	\
	ft_get_digit_count_base.c			\
	ft_get_digit_count.c				\
	ft_itoa.c							\
	ft_max.c							\
	ft_min.c							\
	ft_nbr_to_str.c						\
	ft_unsigned_nbr_to_str.c			\
)

STR_SOURCES := $(addprefix src/str/,	\
	ft_free_split.c						\
	ft_rejoin_split.c					\
	ft_split_str.c						\
	ft_split.c							\
	ft_str_lower.c						\
	ft_str_eq.c							\
	ft_str_not_chr.c					\
	ft_str_not_str.c					\
	ft_str_repeat.c						\
	ft_str_replace.c					\
	ft_str_upper.c						\
	ft_stralloc.c						\
	ft_strchr.c							\
	ft_strcmp.c							\
	ft_strdup.c							\
	ft_striteri.c						\
	ft_strjoin.c						\
	ft_strlcat.c						\
	ft_strlcpy.c						\
	ft_strlen.c							\
	ft_strmapi.c						\
	ft_strncmp.c						\
	ft_strnlen.c						\
	ft_strnstr.c						\
	ft_strrchr.c						\
	ft_strstr.c							\
	ft_strtrim.c						\
	ft_strtrim_whitespace.c				\
	ft_substr.c							\
)

################################################################################

SOURCES :=								\
	$(CHAR_SOURCES) $(IO_SOURCES)		\
	$(LST_SOURCES) $(MEM_SOURCES)		\
	$(NBR_SOURCES) $(STR_SOURCES)

################################################################################
