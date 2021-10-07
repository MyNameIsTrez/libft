MAIN_TEST := main_test
MAIN_TEST_AR := $(MAIN_TEST).a
HEADER_FILES :=
OBJECT_FILES := obj/main_test.o obj/ft_isalpha.o obj/test_ft_isalpha.o
LD_FLAGS ?=  -fsanitize=address
C_FLAGS ?= -Wall -Wextra -Werror


all: $(MAIN_TEST)

$(MAIN_TEST): $(OBJECT_FILES)
	@ar rcs $(MAIN_TEST_AR) $^
	@$(CC) $(LD_FLAGS) -o $@ $(MAIN_TEST_AR)

obj/%.o: %.c $(HEADER_FILES)
	@mkdir -p $(@D)
	@$(CC) -c $(C_FLAGS) -o $@ $<

clean:
	@rm -f $(OBJECT_FILES)

fclean: clean
	@rm -f $(MAIN_TEST) $(MAIN_TEST_AR) $(OBJECT_FILES)

# bonus:
#	compile with bonus


.PHONY: all clean fclean bonus