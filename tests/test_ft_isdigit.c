/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isdigit.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:03:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/11 14:10:57 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	test_ft_isdigit(void)
{
	int	c;

	printf("Testing ft_isdigit...\n");
	c = 0;
	while (c <= 255)
	{
		assert(ft_isdigit(c) == isdigit(c));
		c++;
	}
}
