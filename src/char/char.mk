this_mkfile := $(abspath $(lastword $(MAKEFILE_LIST)))
original_mkfile := $(abspath $(firstword $(MAKEFILE_LIST)))
current_dir := $(dir $(patsubst $(dir $(original_mkfile))%,%,$(this_mkfile)))

SOURCES += $(addprefix $(current_dir),	\
	ft_char_to_digit.c					\
	ft_char_to_str.c					\
	ft_is_lower.c						\
	ft_is_upper.c						\
	ft_isalnum.c						\
	ft_isalpha.c						\
	ft_isascii.c						\
	ft_isdigit.c						\
	ft_isprint.c						\
	ft_isspace.c						\
	ft_tolower.c						\
	ft_toupper.c						\
)
