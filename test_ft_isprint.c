/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isprint.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:03:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/07 16:25:00 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

#include <ctype.h>

#include "libft.h"

int	test_ft_isprint(void)
{
	printf("Testing ft_isprint...\n");
	assert(ft_isprint('x') == isprint('x'));
	assert(ft_isprint('3') == isprint('3'));
	assert(ft_isprint(' ') == isprint(' '));
	return (0);
}
