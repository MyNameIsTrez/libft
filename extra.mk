EXTRA_UNSORTED :=					\
	EXTRA_ft_char_to_digit.c		\
	EXTRA_ft_digit_to_char.c		\
	EXTRA_ft_get_number_len.c		\
	EXTRA_ft_isspace.c				\
	EXTRA_ft_max.c					\
	EXTRA_ft_min.c					\
	EXTRA_ft_str_not_chr.c			\
	EXTRA_ft_stralloc.c				\
	EXTRA_ft_strcmp.c				\
	EXTRA_ft_strnlen.c				\
	EXTRA_ft_strstr.c				\
	EXTRA_ft_strtrim_whitespace.c	\
	EXTRA_ft_free.c					\
	# EXTRA_ft_nd_array.c			\


EXTRA_SOURCES := $(EXTRA_UNSORTED)

EXTRA_OBJECT_FILENAMES := $(EXTRA_SOURCES:.c=.o)

EXTRA_OBJECTS := $(addprefix obj/,$(EXTRA_OBJECT_FILENAMES))

EXTRA_TESTER_OBJECTS := $(addprefix obj/test_,$(EXTRA_OBJECT_FILENAMES))
