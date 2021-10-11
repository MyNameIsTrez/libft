/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isalnum.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:03:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/11 14:10:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	test_ft_isalnum(void)
{
	int	c;

	printf("Testing ft_isalnum...\n");
	c = 0;
	while (c <= 255)
	{
		assert(ft_isalnum(c) == isalnum(c));
		c++;
	}
}
