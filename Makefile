NAME := libft.a

CC := cc # TODO: Use gcc instead?

C_FLAGS ?= -Wall -Wextra -Werror -fsanitize=address

HEADERS :=

LINKER_FLAGS ?= -fsanitize=address


LIBFT_OBJECT_STEMS :=\
	isalpha\
	isdigit\
	isalnum\
	isascii\
	isprint


LIBFT_OBJECT_FILENAMES := ${addsuffix .o,${addprefix ft_,${LIBFT_OBJECT_STEMS}}}
LIBFT_OBJECT_PATHS := ${addprefix obj/,${LIBFT_OBJECT_FILENAMES}}


all: $(NAME)

$(NAME): $(LIBFT_OBJECT_PATHS)
	@ar rcs ${NAME} $^

obj/%.o: %.c $(HEADERS)
#	@printf "%s\n" $<
	@mkdir -p $(@D)
	@$(CC) -c $(C_FLAGS) -o $@ $<

clean:
	@rm -f $(LIBFT_OBJECT_PATHS)

fclean: clean
	@rm -f $(NAME) $(OBJECT_FILES)

re: fclean all

# bonus:
#	compile with bonus

.PHONY: all clean fclean re bonus