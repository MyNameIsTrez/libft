/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tester.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 15:40:45 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/08 11:51:14 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	test_is(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
}

int	main(void)
{
	printf("Starting tests...\n");
	test_is();
	test_ft_strlen();
	test_ft_memset();
	printf("All tests passed!\n");
	return (0);
}
