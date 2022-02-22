/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_split_str.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 12:59:45 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_split_str)
{
	{
		char	*str = "AB1ABAB2AB3";
		char	*sep = "AB";
		char	**split_str = ft_split_str(str, sep);

		massert(split_str[0], "");
		massert(split_str[1], "1");
		massert(split_str[2], "");
		massert(split_str[3], "2");
		massert(split_str[4], "3");
		massert((void *)split_str[5], NULL);

		ft_free_split(&split_str);
	}

	{
		char	*str = "AB1ABAB2AB3AB";
		char	*sep = "AB";
		char	**split_str = ft_split_str(str, sep);

		massert(split_str[0], "");
		massert(split_str[1], "1");
		massert(split_str[2], "");
		massert(split_str[3], "2");
		massert(split_str[4], "3");
		// massert((void *)split_str[5], NULL);
		massert(split_str[5], "");
		massert((void *)split_str[6], NULL);

		ft_free_split(&split_str);
	}
}

////////////////////////////////////////////////////////////////////////////////
