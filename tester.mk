# clear && make -f tester.mk tester && ./tester
# clear && make -f tester.mk fclean_tester

# TODO: Verify with Marius if the Makefiles are correct using this:
# https://github.com/BinaryBenji/Libft.42/blob/master/Makefile


include Makefile
include additional.mk


TESTER_OBJECTS := ${addprefix obj/test_,${OBJECT_FILENAMES}}


# tester also tests functions in the additional/ folder
tester: tester.c libft.a ${ADDITIONAL_OBJECTS} ${TESTER_OBJECTS}
	@$(CC) $(LINKER_FLAGS) -o tester tester.c libft.a ${TESTER_OBJECTS}

clean_tester:
	@rm -f $(TESTER_OBJECTS)

fclean_tester: fclean clean_tester
	@rm -f tester