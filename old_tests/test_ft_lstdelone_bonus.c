#include "tests.h"

static void	free_content(void *content)
{
	ft_free(content);
}

void	test_ft_lstdelone(void)
{
	char	*foo;
	t_list	*lst;

	foo = malloc(4);
	foo[0] = 'b';
	foo[1] = 'a';
	foo[2] = 'r';
	foo[3] = '\0';
	lst = ft_lstnew(foo);
	printf("'%s'\n", lst->content);
	ft_lstdelone(lst, free_content);
}
