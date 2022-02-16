/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_memset.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 16:20:39 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/16 16:21:06 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_memset)
{
	char	str[4];

	str[0] = 'f';
	str[1] = 'o';
	str[2] = 'o';
	str[3] = '\0';
	ASSERT(ft_memset(str, 'c', 2), memset(str, 'c', 2));
}

////////////////////////////////////////////////////////////////////////////////
