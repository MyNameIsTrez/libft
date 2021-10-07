NAME := libft.a

LIBFT_OBJECTS := obj/test_ft_isalpha.o obj/ft_isalpha.o
HEADERS :=

C_FLAGS ?= -Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(LIBFT_OBJECTS)
	@ar rcs ${NAME} $^

obj/%.o: %.c $(HEADERS)
	@printf "%s\n" $<
	@mkdir -p $(@D)
	@$(CC) -c $(C_FLAGS) -o $@ $<

clean:
	@rm -f $(LIBFT_OBJECTS)

fclean: clean
	@rm -f $(NAME) $(OBJECT_FILES)

re: fclean all

# bonus:
#	compile with bonus

.PHONY: all clean fclean bonus


# TODO: Move this tester block to a different file
LINKER_FLAGS ?= -fsanitize=address # TODO: Rename LD to something more verbose

tester: tester.c libft.a
	@$(CC) $(LINKER_FLAGS) -o tester tester.c libft.a