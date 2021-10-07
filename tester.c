/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tester.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 15:40:45 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/07 15:19:20 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

int	main(void)
{
	printf("Starting tests...\n");
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	printf("All tests passed!\n");
	return (0);
}
