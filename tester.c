/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tester.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 17:07:20 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/16 12:47:29 by sbos          ########   odam.nl         */
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

#define TEST(test_function) {void test_##test_function(void);printf("Calling function '" #test_function "'\n");test_##test_function();}

////////////////////////////////////////////////////////////////////////////////

void	lst_tests(void)
{
	TEST(ft_lst_new_back);
	TEST(ft_lst_new_front);
	TEST(ft_lstclear);
	TEST(ft_lstdelone);
	TEST(ft_lstiter);
	TEST(ft_lstlast);
	TEST(ft_lstmap);
	TEST(ft_lstnew);

	TEST(ft_lst_content_size);
	TEST(ft_lstadd_back);
	TEST(ft_lstadd_front);
	TEST(ft_lstsize);
}

void	nbr_tests(void)
{
	TEST(ft_get_digit_count_base_unsigned);
	TEST(ft_itoa);
	TEST(ft_nbr_to_str);
	TEST(ft_unsigned_nbr_to_str);
}

////////////////////////////////////////////////////////////////////////////////

void	test(void)
{
	lst_tests();
	nbr_tests();
	TEST(ft_str_upper);
	TEST(ft_str_repeat);
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
