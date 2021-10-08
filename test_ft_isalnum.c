/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isalnum.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:03:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/08 10:20:06 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

#include <ctype.h>

#include "libft.h"

int	test_ft_isalnum(void)
{
	int	c;

	printf("Testing ft_isalnum...\n");
	c = 0;
	while (c <= 255)
	{
		assert(ft_isalnum(c) == ft_isalnum(c));
		c++;
	}
	return (0);
}
