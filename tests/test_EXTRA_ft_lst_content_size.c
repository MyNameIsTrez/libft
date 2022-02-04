#include "tests.h"

typedef size_t (*t_size_fn)(const void *);

void	test_ft_lst_content_size(void)
{
	t_list	*lst = NULL;

	assert(ft_lst_content_size(lst, (t_size_fn)&(ft_strlen)) == 0);
	ft_lst_new_back(&lst, strdup("foo"));
	assert(ft_lst_content_size(lst, (t_size_fn)&(ft_strlen)) == 3);
	ft_lst_new_back(&lst, strdup("bar"));
	assert(ft_lst_content_size(lst, (t_size_fn)&(ft_strlen)) == 6);
	ft_lst_new_back(&lst, strdup("baz"));
	assert(ft_lst_content_size(lst, (t_size_fn)&(ft_strlen)) == 9);

	// size_t	size = ft_lst_content_size(lst, (t_size_fn)(&ft_strlen));
	// printf("'%zu'\n", size);

	ft_lstclear(&lst, free);
}
