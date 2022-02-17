this_mkfile := $(abspath $(lastword $(MAKEFILE_LIST)))
original_mkfile := $(abspath $(firstword $(MAKEFILE_LIST)))
current_dir := $(dir $(patsubst $(dir $(original_mkfile))%,%,$(this_mkfile)))

SOURCES += $(addprefix $(current_dir),	\
	ft_bzero.c							\
	ft_calloc.c							\
	ft_free.c							\
	ft_memchr.c							\
	ft_memcmp.c							\
	ft_memcpy.c							\
	ft_memmove.c						\
	ft_memset.c							\
)
# ft_nd_array.c						\
