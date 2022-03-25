/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_split_str.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 12:59:45 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 16:09:25 by sbos          ########   odam.nl         */
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
		char	**split_str;

		m_safe_assert(void *, split_str = ft_split_str(str, sep), split_str, NULL);
		if (split_str != NULL)
		{
			m_safe_string_assert(split_str[0], "");
			m_safe_string_assert(split_str[1], "1");
			m_safe_string_assert(split_str[2], "");
			m_safe_string_assert(split_str[3], "2");
			m_safe_string_assert(split_str[4], "3");
			massert((void *)split_str[5], NULL);
			ft_free_split(&split_str);
		}
	}

	{
		char	*str = "AB1ABAB2AB3AB";
		char	*sep = "AB";
		char	**split_str;

		m_safe_assert(void *, split_str = ft_split_str(str, sep), split_str, NULL);
		if (split_str != NULL)
		{
			m_safe_string_assert(split_str[0], "");
			m_safe_string_assert(split_str[1], "1");
			m_safe_string_assert(split_str[2], "");
			m_safe_string_assert(split_str[3], "2");
			m_safe_string_assert(split_str[4], "3");
			// massert((void *)split_str[5], NULL);
			m_safe_string_assert(split_str[5], "");
			massert((void *)split_str[6], NULL);
			ft_free_split(&split_str);
		}
	}

	{
		char	*str = "";
		char	*sep = "";
		char	**split_str;

		m_safe_assert(void *, split_str = ft_split_str(str, sep), split_str, NULL);
		if (split_str != NULL)
		{
			m_safe_string_assert(split_str[0], "");
			massert((void *)split_str[1], NULL);
			ft_free_split(&split_str);
		}
	}

	{
		// massert(ft_split_str("", ""), NULL)
		// massert(ft_split_str("foo", "x"), NULL)
		// ft_free_split(&split_str);
	}
}

////////////////////////////////////////////////////////////////////////////////
