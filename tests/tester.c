/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tester.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 17:07:20 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/23 16:43:06 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "tests/tests.h"
// #include "tests.h"

////////////////////////////////////////////////////////////////////////////////

# include <stdio.h>		// printf()
# include <stdlib.h>	// EXIT_SUCCESS

////////////////////////////////////////////////////////////////////////////////

t_list *g_tests_lst = NULL;

////////////////////////////////////////////////////////////////////////////////

// This function has to be redefined here cause it normally calls ft_unstable_malloc
// and that could prevent tests from being run.
t_list	*test_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

// This function has to be redefined here cause it normally calls ft_unstable_malloc
// and that could prevent tests from being run.
t_list	*test_lst_new_front(t_list **lst, void *content)
{
	t_list	*new_lst;

	new_lst = test_lstnew(content);
	if (new_lst == NULL)
		return (NULL);
	ft_lstadd_front(lst, new_lst);
	return (new_lst);
}

////////////////////////////////////////////////////////////////////////////////

static bool	str_in_arr(char *str, char *arr[], size_t sizeof_arr)
{
	size_t i = 0;
	while (i < sizeof_arr / sizeof(char *))
	{
		if (ft_strcmp(arr[i], str) == 0)
			return (true);
		i++;
	}
	return (false);
}

static void	run_tests(char *exclude_tests[], size_t sizeof_exclude_tests)
{
	t_list	*lst = g_tests_lst;
	while (lst != NULL)
	{
		t_fn_info *fn = lst->content;
		if (!str_in_arr(fn->fn_name, exclude_tests, sizeof_exclude_tests))
		{
			printf("Testing function '%s'\n", fn->fn_name);
			fn->fn_ptr();
		}
		lst = lst->next;
	}
}

////////////////////////////////////////////////////////////////////////////////

int	main(void)
{
	printf("Running tests...\n");
	char *exclude_tests[] = {
		// "ft_str_repeat",
	};
	run_tests(exclude_tests, sizeof(exclude_tests));
	printf("Tests ran successfully!\n");
	// system("leaks tester");
	return (EXIT_SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////
