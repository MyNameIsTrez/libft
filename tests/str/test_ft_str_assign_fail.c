/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_str_assign_fail.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/25 20:13:08 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/04 15:35:26 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_str_assign_fail)
{
	size_t	i;
	char	*i_str;
	char	*str;

	str = NULL;
	// TODO: Replace this with a less janky test.
	// This test isn't guaranteed to work, cause memory is often initialized to 0.
	i = 0;
	while (i < 1e3)
	{
		i_str = ft_itoa((int)i);
		massert(ft_str_assign_fail(&str, i_str), (bool)false);
		massert(ft_atoi(i_str), (int)i);
		free(i_str);
		i_str = NULL;
		str = NULL;
		i++;
	}
}

////////////////////////////////////////////////////////////////////////////////
