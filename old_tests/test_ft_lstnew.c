#include "tests.h"

void	test_ft_lstnew(void)
{
	char	foo[] = "bar";

	t_list	*lst = ft_lstnew(foo);
	// t_list	*lst = ft_lstnew("foo");
	// printf("'%s'\n", lst);
	// printf("'%s'\n", lst->content);
	// printf("'%s'\n", lst->next);
	printf("'%p'\n", lst);
	ft_free(lst);
	// free(lst);
	// lst = NULL;
	printf("'%p'\n", lst);
	// printf("'%s'\n", lst->content);
}
