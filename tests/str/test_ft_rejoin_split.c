/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_rejoin_split.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 12:45:44 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_rejoin_split)
{
	{
		char	*str = "AB1ABAB2AB3";
		char	*sep = "AB";

		char	**split = ft_split_str(str, sep);
		massert(ft_rejoin_split(split, "C"), "C1CC2C3");
	}

	{
		char	*str = "AB1ABAB2AB3AB";
		char	*sep = "AB";

		char	**split = ft_split_str(str, sep);
		massert(ft_rejoin_split(split, "C"), "C1CC2C3C");
	}
}

////////////////////////////////////////////////////////////////////////////////
