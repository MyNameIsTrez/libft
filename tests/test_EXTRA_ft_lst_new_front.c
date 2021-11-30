#include "tests.h"

void	test_EXTRA_ft_lst_new_front(void)
{
	t_list	*lst;
	lst = NULL;

	ft_lst_new_front(&lst, strdup("foo"));
	assert(strcmp(lst->content, "foo") == 0);
	ft_lst_new_front(&lst, strdup("bar"));
	assert(strcmp(lst->content, "bar") == 0);
	ft_lst_new_front(&lst, strdup("baz"));
	assert(strcmp(lst->content, "baz") == 0);

	// printf("'%s'\n", lst->content);

	ft_lstclear(&lst, &free);
}
