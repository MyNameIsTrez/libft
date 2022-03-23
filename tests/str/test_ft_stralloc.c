/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_stralloc.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 16:48:14 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/23 16:52:16 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_stralloc)
{
	char	*str;

	str = malloc(5);
	str[5] = '\0';
	str[0] = 'h';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	massert(str, "hello");
	massert(str[5], (char)'\0');
}

////////////////////////////////////////////////////////////////////////////////
