/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_memset.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:03:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/07 16:30:53 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test_ft_memset(void)
{
	char	str[4];

	str[0] = 'f';
	str[1] = 'o';
	str[2] = 'o';
	str[3] = '\0';
	printf("Testing ft_memset...\n");
	assert(ft_memset(str, 'c', 2) == memset(str, 'c', 2));
	return (0);
}
