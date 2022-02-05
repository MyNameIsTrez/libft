#include "tests.h"

static void *	lstmap_f(void *content) {
	(void)content;
	return ("OK !");
}

void	test_ft_lstmap(void)
{
	t_list	*l = ft_lstnew(ft_strdup(" 1 2 3 "));
	t_list	*ret;

	l->next = ft_lstnew(ft_strdup("ss"));
	l->next->next = ft_lstnew(ft_strdup("-_-"));
	ret = ft_lstmap(l, lstmap_f, NULL);
	if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") && !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"))
	{
		printf("yay\n");
		return ;
	}
	printf("nay\n");
}
