/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_strlen.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:03:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/07 16:30:53 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test_ft_strlen(void)
{
	printf("Testing ft_strlen...\n");
	assert(ft_strlen("") == strlen(""));
	assert(ft_strlen("f") == strlen("f"));
	assert(ft_strlen("fo") == strlen("fo"));
	assert(ft_strlen("foo") == strlen("foo"));
	return (0);
}
