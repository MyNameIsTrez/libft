/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_split_str.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 12:59:45 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/17 15:39:52 by sbos          ########   odam.nl         */
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

		ASSERT(split_str[0], "");
		ASSERT(split_str[1], "1");
		ASSERT(split_str[2], "");
		ASSERT(split_str[3], "2");
		ASSERT(split_str[4], "3");
		ASSERT((void *)split_str[5], NULL);

		ft_free_split(&split_str);
	}

	{
		char	*str = "AB1ABAB2AB3AB";
		char	*sep = "AB";
		char	**split_str = ft_split_str(str, sep);

		ASSERT(split_str[0], "");
		ASSERT(split_str[1], "1");
		ASSERT(split_str[2], "");
		ASSERT(split_str[3], "2");
		ASSERT(split_str[4], "3");
		// ASSERT((void *)split_str[5], NULL);
		ASSERT(split_str[5], "");
		ASSERT((void *)split_str[6], NULL);

		ft_free_split(&split_str);
	}
}

////////////////////////////////////////////////////////////////////////////////
