EXTRA_UNSORTED :=			\
	char_to_int.c			\
	isspace.c				\
	max.c					\
	min.c					\
	strcmp.c				\
	strnlen.c				\
	strstr.c				\
	strtrim_whitespace.c


EXTRA_SOURCES := $(EXTRA_UNSORTED)

EXTRA_OBJECT_FILENAMES := $(addprefix EXTRA_ft_,$(EXTRA_SOURCES:.c=.o))

EXTRA_OBJECTS := $(addprefix obj/,$(EXTRA_OBJECT_FILENAMES))

EXTRA_TESTER_OBJECTS := $(addprefix obj/test_,$(EXTRA_OBJECT_FILENAMES))
