NAME := libft.a

CC := cc # TODO: Use gcc instead? https://github.com/BinaryBenji/Libft.42/blob/master/Makefile

# C_FLAGS ?= -Wall -Wextra -Werror -fsanitize=address # TODO: Add -g flag? https://github.com/BinaryBenji/Libft.42/blob/master/Makefile
C_FLAGS ?= -Wall -Wextra -fsanitize=address # TODO: Add -g flag? https://github.com/BinaryBenji/Libft.42/blob/master/Makefile

HEADERS :=

LINKER_FLAGS ?= -fsanitize=address


PART_1_IS :=\
	isalpha\
	isdigit\
	isalnum\
	isascii\
	isprint

PART_1_UNSORTED :=\
	strlen\
	memset\
	bzero\
	memcpy\
	memmove\
	strlcpy\
	strlcat\
	toupper\
	tolower\
	strchr\
	strrchr\
	strncmp\
	memchr\
	memcmp\
	strnstr\
	atoi

PART_1_MALLOC :=\
	calloc\
	strdup


PART_2_UNSORTED :=\
	substr\
	strjoin\
	strtrim\
	split\
	itoa\
	strmapi\
	striteri\
	putchar_fd\
	putstr_fd\
	putendl_fd\
	putnbr_fd


PART_2_BONUS :=\
	lstnew\
	lstadd_front\
	lstsize\
	lstlast\
	lstadd_back\
	lstdelone\
	lstclear\
	lstiter\
	lstmap


PART_1 := ${PART_1_IS} ${PART_1_UNSORTED} ${PART_1_MALLOC}
PART_2 := ${PART_2_UNSORTED} ${PART_2_BONUS}


OBJECT_STEMS := ${PART_1} ${PART_2}
OBJECT_FILENAMES := ${addsuffix .o,${addprefix ft_,${OBJECT_STEMS}}}
OBJECT_PATHS := ${addprefix obj/,${OBJECT_FILENAMES}}


all: $(NAME)

$(NAME): $(OBJECT_PATHS)
	@ar rcs ${NAME} $^

obj/%.o: %.c $(HEADERS)
#	@printf "%s\n" $<
	@mkdir -p $(@D)
	@$(CC) -c $(C_FLAGS) -o $@ $<

clean:
	@rm -f $(OBJECT_PATHS)

fclean: clean
	@rm -f $(NAME) $(OBJECT_FILES)

re: fclean all

# bonus:
#	compile with bonus

.PHONY: all clean fclean re bonus
