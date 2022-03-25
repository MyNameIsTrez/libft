/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_empty_str_assign_fail.c                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/25 20:13:08 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 17:15:28 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_empty_str_assign_fail)
{
	char	*str;

	str = NULL;
	m_safe_assert(bool, ft_empty_str_assign_fail(&str), false, true);
	free(str);
}

////////////////////////////////////////////////////////////////////////////////
