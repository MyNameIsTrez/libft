/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isalpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:03:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/07 15:18:05 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

#include <ctype.h>

#include "libft.h"

int	test_ft_isalpha(void)
{
	printf("Testing ft_isalpha...\n");
	assert(ft_isalpha('x') == isalpha('x'));
	assert(ft_isalpha(';') == isalpha(';'));
	return (0);
}
