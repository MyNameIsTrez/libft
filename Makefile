NAME := main_test
HEADERFILES :=
OBJFILES := main_test.o obj/isalpha/ft_isalpha.o obj/isalpha/test_ft_isalpha.o
LDFLAGS ?=
CFLAGS ?= -Wall -Wextra -Werror -fsanitize=address


all: $(NAME)

$(NAME): $(OBJFILES)
	$(CC) $(LDFLAGS) -o $@ $^

obj/%.o: src/%.c $(HEADERFILES)
#	TODO: ${@D} instead of ${dir $@} as it's shorter?
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm --force $(NAME) $(OBJFILES)

# fclean: clean
#	remove .o and other made files (such as libft.a)

# bonus:
#	compile with bonus


.PHONY: all clean fclean bonus