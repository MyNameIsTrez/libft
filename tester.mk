# make -f tester.mk tester && ./tester
# make libclean all && ./run_test
# sh grademe.sh -u


export DEBUG=1
export BONUS=1

include Makefile
include extra.mk


TESTER_OBJECTS := $(addprefix $(OBJ_DIR)/test_,$(SOURCES:.c=.o))


# tester also tests functions in the additional/ folder
tester: tester.c bonus $(TESTER_OBJECTS) $(EXTRA_OBJECTS) $(EXTRA_TESTER_OBJECTS)
	$(CC) $(LINKER_FLAGS) -g -o tester tester.c libft.a $(TESTER_OBJECTS) $(EXTRA_OBJECTS) $(EXTRA_TESTER_OBJECTS)

obj/%.o: tests/%.c $(HEADERS)
	@mkdir -p $(@D)
	$(CC) -c $(C_FLAGS) -g $(INCLUDES) -o $@ $<

re_tester: fclean tester

.PHONY: tester re_tester
