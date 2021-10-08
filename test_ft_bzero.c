/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_bzero.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:03:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/07 16:30:53 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// bzero(str, 2));
int	test_ft_bzero(void)
{
	char	str_ft[4];

	str_ft[0] = 'f';
	str_ft[1] = 'o';
	str_ft[2] = 'o';
	str_ft[3] = '\0';
	printf("Testing ft_bzero...\n");
	ft_bzero(str_ft, 2);
	printf("a%sb", str_ft);
	return (0);
}
