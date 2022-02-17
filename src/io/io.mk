this_mkfile := $(abspath $(lastword $(MAKEFILE_LIST)))
original_mkfile := $(abspath $(firstword $(MAKEFILE_LIST)))
current_dir := $(dir $(patsubst $(dir $(original_mkfile))%,%,$(this_mkfile)))

SOURCES += $(addprefix $(current_dir),	\
	ft_print.c							\
	ft_putchar_fd.c						\
	ft_putendl_fd.c						\
	ft_putnbr_fd.c						\
	ft_putstr_fd.c						\
)