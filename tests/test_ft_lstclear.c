#include "../libft.h"
#include "../tests.h"

static void	*ft_free(void **a)
{
	free(*a);
	*a = NULL;
	return (NULL);
}

static void	free_t_list_content(void *content)
{
	ft_free(&content);
}

void	test_ft_lstclear(void)
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
	ft_lstdelone(lst, free_t_list_content);
}
