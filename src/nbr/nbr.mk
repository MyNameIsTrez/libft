this_mkfile := $(abspath $(lastword $(MAKEFILE_LIST)))
original_mkfile := $(abspath $(firstword $(MAKEFILE_LIST)))
current_dir := $(dir $(patsubst $(dir $(original_mkfile))%,%,$(this_mkfile)))

SOURCES += $(addprefix $(current_dir),	\
	ft_atoi.c							\
	ft_digit_to_char_base.c				\
	ft_digit_to_char.c					\
	ft_get_digit_count_base_unsigned.c	\
	ft_get_digit_count_base.c			\
	ft_get_digit_count.c				\
	ft_itoa.c							\
	ft_max.c							\
	ft_min.c							\
	ft_nbr_to_str.c						\
	ft_unsigned_nbr_to_str.c			\
)
