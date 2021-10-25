#include "../libft.h"
#include "../tests.h"

static void	free_t_list(t_list **lst)
{
	free(*lst);
}

void	test_ft_lstnew(void)
{
	t_list	*lst = ft_lstnew("foo");
	// printf("%s\n", lst);
	printf("%s\n", lst->content);
	// printf("%s\n", lst->next);
	free_t_list(&lst);
}
