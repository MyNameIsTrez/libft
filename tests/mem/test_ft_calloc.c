/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_calloc.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 15:23:23 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_calloc)
{
	size_t	i;
	char	*str;

	// TODO: Replace this with a less janky test.
	// This test isn't guaranteed to work, cause memory is often initialized to 0.
	i = 0;
	while (i < 1e3)
	{
		str = ft_calloc(2, 2);
		massert(str[0], (char)'\0');
		massert(str[1], (char)'\0');
		massert(str[2], (char)'\0');
		massert(str[3], (char)'\0');
		i++;
	}
}

////////////////////////////////////////////////////////////////////////////////
