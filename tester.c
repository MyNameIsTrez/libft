/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tester.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 17:07:20 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/08 15:29:28 by sbos          ########   odam.nl         */
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

#define TEST(test_function) {printf("Calling function '" #test_function "'\n");test_function();}

////////////////////////////////////////////////////////////////////////////////

void	lst_tests(void)
{
	TEST(test_ft_lst_new_back);
	TEST(test_ft_lst_new_front);
	TEST(test_ft_lstclear);
	TEST(test_ft_lstdelone);
	TEST(test_ft_lstiter);
	TEST(test_ft_lstlast);
	TEST(test_ft_lstmap);
	TEST(test_ft_lstnew);

	TEST(test_ft_lst_content_size);
	TEST(test_ft_lstadd_back);
	TEST(test_ft_lstadd_front);
	TEST(test_ft_lstsize);
}

void	nbr_tests(void)
{
	TEST(test_ft_itoa);
	TEST(test_ft_nbr_to_str);
}

////////////////////////////////////////////////////////////////////////////////

void	test(void)
{
	lst_tests();
	nbr_tests();
}

////////////////////////////////////////////////////////////////////////////////

int main(void)
{
	printf("Running tests...\n");
	test();
	printf("Tests ran successfully!\n");
	return (EXIT_SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////
