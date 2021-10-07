/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isdigit.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:03:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/07 14:09:57 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

#include <ctype.h>

int	ft_isdigit(int c);

int	test_ft_isdigit(void)
{
	printf("\nTesting ft_isdigit...\n");
	assert(ft_isdigit('3') == isdigit('3'));
	assert(ft_isdigit(';') == isdigit(';'));
	printf("Done.\n");
	return (0);
}
