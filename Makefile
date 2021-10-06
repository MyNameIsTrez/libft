MAIN_TEST := main_test
HEADER_FILES :=
OBJECT_FILES := obj/main_test.o obj/ft_isalpha.o obj/test_ft_isalpha.o
LD_FLAGS ?= -fsanitize=address
C_FLAGS ?= -Wall -Wextra -Werror -fsanitize=address


all: $(MAIN_TEST)

$(MAIN_TEST): $(OBJECT_FILES)
	$(CC) $(LD_FLAGS) -o $@ $^

obj/%.o: %.c $(HEADER_FILES)
#	@mkdir -p $(@D)
	$(CC) -c $(C_FLAGS) -o $@ $<

clean:
	rm -f $(MAIN_TEST) $(OBJECT_FILES)

# fclean: clean
#	remove .o and other made files (such as libft.a)

# bonus:
#	compile with bonus

# ar rcs ${MAIN_TEST}.a

.PHONY: all clean fclean bonus