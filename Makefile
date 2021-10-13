# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sbos <sbos@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/12 16:31:00 by sbos          #+#    #+#                  #
#    Updated: 2021/10/13 13:21:53 by sbos          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

CC := gcc

C_FLAGS ?= -g -Wall -Wextra -fsanitize=address

HEADERS := libft.h

LINKER_FLAGS ?= -fsanitize=address


PART_1_IS :=		\
	isalpha.c		\
	isdigit.c		\
	isalnum.c		\
	isascii.c		\
	isprint.c

PART_1_UNSORTED :=	\
	strlen.c		\
	memset.c		\
	bzero.c			\
	memcpy.c		\
	memmove.c		\
	strlcpy.c		\
	strlcat.c		\
	toupper.c		\
	tolower.c		\
	strchr.c		\
	strrchr.c		\
	strncmp.c		\
	memchr.c		\
	memcmp.c		\
	strnstr.c		\
	atoi.c

PART_1_MALLOC :=	\
	calloc.c		\
	strdup.c


PART_2_UNSORTED :=	\
	substr.c		\
	strjoin.c		\
	strtrim.c		\
	split.c			\
	itoa.c			\
	strmapi.c		\
	striteri.c		\
	putchar_fd.c	\
	putstr_fd.c		\
	putendl_fd.c	\
	putnbr_fd.c


PART_2_BONUS :=		\
	lstnew.c		\
	lstadd_front.c	\
	lstsize.c		\
	lstlast.c		\
	lstadd_back.c	\
	lstdelone.c		\
	lstclear.c		\
	lstiter.c		\
	lstmap.c


PART_1 := $(PART_1_IS) $(PART_1_UNSORTED) $(PART_1_MALLOC)
PART_2 := $(PART_2_UNSORTED) $(PART_2_BONUS)


SOURCES := $(PART_1) $(PART_2)

OBJECT_FILENAMES := $(addprefix ft_,$(SOURCES:.c=.o))
OBJECT_PATHS := $(addprefix obj/,$(OBJECT_FILENAMES))


all: $(NAME)

$(NAME): $(OBJECT_PATHS)
	@ar rcs $(NAME) $^

obj/%.o: %.c $(HEADERS)
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJECT_PATHS)

fclean: clean
	@rm -f $(NAME) $(OBJECT_FILES)

re: fclean all

# bonus:
#	compile with bonus

.PHONY: all clean fclean re bonus
