#include "tests.h"

// Test(ft_lstsize, basic_test, .timeout=5)
Test(ft_lstsize, basic_test)
{
	t_list	*lst = NULL;

	// ft_lst_new_front(&list, "foo");
	// list->next = list;

	ft_lst_new_front(&lst, "foo");
	ft_lst_new_front(&lst, "foo");
	ft_lst_new_front(&lst, "foo");
	ft_lst_new_front(&lst, "foo");
	ft_lst_new_front(&lst, "foo");
	ft_lst_new_front(&lst, "foo");
	ft_lst_new_front(&lst, "foo");

	cr_expect_int_eq(ft_lstsize(lst), 7);

	ft_lstclear(&lst, NULL);
}

Test(ft_lstsize, tail_recursion, .timeout=1)
{
	t_list	*lst = NULL;

	ft_lst_new_front(&lst, "foo");
	// lst->next = lst;
	ft_lstsize(lst);
	ft_lstdelone(lst, NULL);
}
