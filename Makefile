NAME := libft.a

# TODO: Move the test_ functions down to the tester recipe
LIBFT_OBJECTS := obj/ft_isalpha.o obj/ft_isdigit.o obj/ft_isalnum.o
HEADERS :=

C_FLAGS ?= -Wall -Wextra -Werror -fsanitize=address


all: $(NAME)

$(NAME): $(LIBFT_OBJECTS)
	@ar rcs ${NAME} $^

obj/%.o: %.c $(HEADERS)
#	@printf "%s\n" $<
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
TESTER_OBJECTS = obj/test_ft_isalpha.o obj/test_ft_isdigit.o obj/test_ft_isalnum.o
LINKER_FLAGS ?= -fsanitize=address # TODO: Rename LD to something more verbose

tester: tester.c libft.a ${TESTER_OBJECTS}
	@$(CC) $(LINKER_FLAGS) -o tester tester.c libft.a ${TESTER_OBJECTS}

clean_tester:
	@rm -f $(TESTER_OBJECTS) tester

fclean_tester: fclean clean_tester