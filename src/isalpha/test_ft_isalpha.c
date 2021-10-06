/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isalpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 14:38:46 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/06 16:44:24 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

int	ft_isalpha(int c);

int	test_ft_isalpha(void)
{
	printf("Testing ft_isalpha...\n");
	assert(ft_isalpha('x') == 1);
	assert(ft_isalpha(';') == 0);
	// assert(...)
	printf("Done.\n");
	return (0);
}
