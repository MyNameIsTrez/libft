/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isprint.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:03:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/08 11:24:10 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test_ft_isprint(void)
{
	int	c;

	printf("Testing ft_isprint...\n");
	c = 0;
	while (c <= 255)
	{
		assert(ft_isprint(c) == isprint(c));
		c++;
	}
	return (0);
}
