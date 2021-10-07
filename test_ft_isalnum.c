/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isalnum.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:03:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/07 15:17:58 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

#include <ctype.h>

#include "libft.h"

int	test_ft_isalnum(void)
{
	printf("Testing ft_isalnum...\n");
	assert(ft_isalnum('x') == isalnum('x'));
	assert(ft_isalnum('3') == isalnum('3'));
	assert(ft_isalnum(';') == isalnum(';'));
	return (0);
}
