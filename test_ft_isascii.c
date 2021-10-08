/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isascii.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:03:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/08 10:21:15 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

#include <ctype.h>

#include "libft.h"

int	test_ft_isascii(void)
{
	int	c;

	printf("Testing ft_isascii...\n");
	c = 0;
	while (c <= 255)
	{
		assert(ft_isascii(c) == ft_isascii(c));
		c++;
	}
	return (0);
}
