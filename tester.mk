# make -f tester.mk tester && ./tester


include Makefile


# TODO: Move this tester block to a different file
TESTER_OBJECTS := ${addprefix obj/,${TESTER_OBJECT_NAMES}}


tester: tester.c libft.a ${TESTER_OBJECTS}
	@$(CC) $(LINKER_FLAGS) -o tester tester.c libft.a ${TESTER_OBJECTS}

clean_tester:
	@rm -f $(TESTER_OBJECTS) tester

fclean_tester: fclean clean_tester