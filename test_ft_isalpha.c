/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isalpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:03:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/08 10:20:55 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

#include <ctype.h>

#include "libft.h"

int	test_ft_isalpha(void)
{
	int	c;

	printf("Testing ft_isalpha...\n");
	c = 0;
	while (c <= 255)
	{
		assert(ft_isalpha(c) == ft_isalpha(c));
		c++;
	}
	return (0);
}
