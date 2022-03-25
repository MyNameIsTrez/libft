/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_nbr_to_str.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 18:56:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 17:18:01 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_nbr_to_str)
{
	m_safe_assert(char *, ft_nbr_to_str(42, 10), "42", NULL);
	m_safe_assert(char *, ft_nbr_to_str(-42, 10), "-42", NULL);
	m_safe_assert(char *, ft_nbr_to_str(0, 10), "0", NULL);
	m_safe_assert(char *, ft_nbr_to_str(-2147483648, 10), "-2147483648", NULL);

	m_safe_assert(char *, ft_nbr_to_str(9, 10), "9", NULL);
	m_safe_assert(char *, ft_nbr_to_str(10, 10), "10", NULL);
	m_safe_assert(char *, ft_nbr_to_str(-9, 10), "-9", NULL);
	m_safe_assert(char *, ft_nbr_to_str(-10, 10), "-10", NULL);

	m_safe_assert(char *, ft_nbr_to_str(15, 16), "f", NULL);
	m_safe_assert(char *, ft_nbr_to_str(-15, 16), "-f", NULL);
	m_safe_assert(char *, ft_nbr_to_str(16, 16), "10", NULL);
	m_safe_assert(char *, ft_nbr_to_str(-16, 16), "-10", NULL);
}

////////////////////////////////////////////////////////////////////////////////
