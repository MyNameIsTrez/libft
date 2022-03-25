/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_rejoin_split.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 12:45:44 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 17:13:26 by sbos          ########   odam.nl         */
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

		char	**split;
		m_safe_assert(void *, split = ft_split_str(str, sep), split, NULL);
		if (split != NULL)
			m_safe_string_assert(ft_rejoin_split(split, "C"), "C1CC2C3");
	}

	{
		char	*str = "AB1ABAB2AB3AB";
		char	*sep = "AB";

		char	**split;
		m_safe_assert(void *, split = ft_split_str(str, sep), split, NULL);
		if (split != NULL)
			m_safe_string_assert(ft_rejoin_split(split, "C"), "C1CC2C3C");
	}
}

////////////////////////////////////////////////////////////////////////////////
