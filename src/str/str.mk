this_mkfile := $(abspath $(lastword $(MAKEFILE_LIST)))
original_mkfile := $(abspath $(firstword $(MAKEFILE_LIST)))
current_dir := $(dir $(patsubst $(dir $(original_mkfile))%,%,$(this_mkfile)))

SOURCES += $(addprefix $(current_dir),	\
	ft_chr_repeat.c						\
	ft_empty_str.c						\
	ft_free_split.c						\
	ft_rejoin_split.c					\
	ft_split_str.c						\
	ft_split.c							\
	ft_str_count_chr.c					\
	ft_str_count_str_overlap.c			\
	ft_str_count_str.c					\
	ft_str_lower.c						\
	ft_str_eq.c							\
	ft_str_not_chr.c					\
	ft_str_not_str.c					\
	ft_str_repeat.c						\
	ft_str_replace.c					\
	ft_str_upper.c						\
	ft_stralloc.c						\
	ft_strchr.c							\
	ft_strcmp.c							\
	ft_strdup.c							\
	ft_striteri.c						\
	ft_strjoin.c						\
	ft_strlcat.c						\
	ft_strlcpy.c						\
	ft_strlen.c							\
	ft_strmapi.c						\
	ft_strncmp.c						\
	ft_strnlen.c						\
	ft_strnstr.c						\
	ft_strrchr.c						\
	ft_strstr.c							\
	ft_strtrim.c						\
	ft_strtrim_whitespace.c				\
	ft_substr.c							\
)
