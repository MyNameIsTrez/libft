/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isascii.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:03:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/11 14:10:55 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	test_ft_isascii(void)
{
	int	c;

	printf("Testing ft_isascii...\n");
	c = 0;
	while (c <= 255)
	{
		assert(ft_isascii(c) == isascii(c));
		c++;
	}
}
