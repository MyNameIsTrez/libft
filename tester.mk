# make -f tester.mk re_tester && ./tester
# make -f tester.mk re_tester && ./tester 2> out

# TODO: Verify with Marius if the Makefiles are correct using this:
# https://github.com/BinaryBenji/Libft.42/blob/master/Makefile


include Makefile
include extra.mk


TESTER_OBJECTS := $(addprefix obj/test_,$(OBJECT_FILENAMES))


# tester also tests functions in the extra/ folder
tester: tester.c libft.a $(TESTER_OBJECTS) $(EXTRA_OBJECTS) $(EXTRA_TESTER_OBJECTS)
	@$(CC) $(LINKER_FLAGS) -o tester tester.c libft.a $(TESTER_OBJECTS) $(EXTRA_OBJECTS) $(EXTRA_TESTER_OBJECTS)

obj/%.o: tests/%.c $(HEADERS)
	@mkdir -p $(@D)
	@$(CC) -c $(C_FLAGS) $(INCLUDES) -o $@ $<

clean_tester: clean
	@rm -f $(TESTER_OBJECTS) $(EXTRA_OBJECTS) $(EXTRA_TESTER_OBJECTS)

fclean_tester: fclean clean_tester
	@rm -f tester

re_tester: fclean_tester tester

.PHONY: tester clean_tester fclean_tester re_tester
