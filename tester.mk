# make -f tester.mk tester && ./tester
# make -f tester.mk fclean_tester

# TODO: Verify with Marius if I did the Makefiles right:
# https://github.com/BinaryBenji/Libft.42/blob/master/Makefile


include Makefile


# TODO: Move this tester block to a different file
TESTER_OBJECTS := ${addprefix obj/test_,${LIBFT_OBJECT_FILENAMES}}

tester: tester.c libft.a ${TESTER_OBJECTS}
	@$(CC) $(LINKER_FLAGS) -o tester tester.c libft.a ${TESTER_OBJECTS}

clean_tester:
	@rm -f $(TESTER_OBJECTS) tester

fclean_tester: fclean clean_tester