#include "tests.h"

void	test_EXTRA_ft_lst_new_back(void)
{
	t_list	*lst;
	lst = NULL;

	ft_lst_new_back(&lst, strdup("foo"));
	assert(strcmp(lst->content, "foo") == 0);
	ft_lst_new_back(&lst, strdup("bar"));
	assert(strcmp(lst->next->content, "bar") == 0);
	ft_lst_new_back(&lst, strdup("baz"));
	assert(strcmp(lst->next->next->content, "baz") == 0);

	// printf("'%s'\n", lst->content);

	ft_lstclear(&lst, &free);
}
