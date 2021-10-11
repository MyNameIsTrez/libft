/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isalpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:03:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/11 14:08:09 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	test_ft_isalpha(void)
{
	int	c;

	printf("Testing ft_isalpha...\n");
	c = 0;
	while (c <= 255)
	{
		assert(ft_isalpha(c) == isalpha(c));
		c++;
	}
}
