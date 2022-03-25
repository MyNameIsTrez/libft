/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_stralloc.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 16:48:14 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 18:36:02 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_stralloc)
{
	char	*str;

	m_safe_assert(char *, str = ft_stralloc(5), str, NULL);
	if (!was_malloc_unstable)
	{
		str[0] = 'h';
		str[1] = 'e';
		str[2] = 'l';
		str[3] = 'l';
		str[4] = 'o';
		massert(str, "hello");
	}
}

////////////////////////////////////////////////////////////////////////////////
