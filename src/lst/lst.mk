this_mkfile := $(abspath $(lastword $(MAKEFILE_LIST)))
original_mkfile := $(abspath $(firstword $(MAKEFILE_LIST)))
current_dir := $(dir $(patsubst $(dir $(original_mkfile))%,%,$(this_mkfile)))

SOURCES += $(addprefix $(current_dir),	\
	ft_lst_content_size.c				\
	ft_lst_new_back.c					\
	ft_lst_new_front.c					\
	ft_lst_reverse.c					\
	ft_lstadd_back.c					\
	ft_lstadd_front.c					\
	ft_lstclear.c						\
	ft_lstdelone.c						\
	ft_lstiter.c						\
	ft_lstlast.c						\
	ft_lstmap.c							\
	ft_lstnew.c							\
	ft_lstsize.c						\
)
