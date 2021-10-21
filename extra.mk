EXTRA_UNSORTED :=			\
	char_to_digit.c			\
	digit_to_char.c			\
	get_number_len.c		\
	isspace.c				\
	max.c					\
	min.c					\
	str_not_chr.c			\
	stralloc.c				\
	strcmp.c				\
	strnlen.c				\
	strstr.c				\
	strtrim_whitespace.c	\
	# free.c				\
	# nd_array.c			\


EXTRA_SOURCES := $(EXTRA_UNSORTED)

EXTRA_OBJECT_FILENAMES := $(addprefix EXTRA_ft_,$(EXTRA_SOURCES:.c=.o))

EXTRA_OBJECTS := $(addprefix obj/,$(EXTRA_OBJECT_FILENAMES))

EXTRA_TESTER_OBJECTS := $(addprefix obj/test_,$(EXTRA_OBJECT_FILENAMES))
