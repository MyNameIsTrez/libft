/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_chr_repeat.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/25 19:14:09 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 17:16:51 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_chr_repeat)
{
	m_safe_assert(char *, ft_chr_repeat('\0', 0), "", NULL);
	m_safe_assert(char *, ft_chr_repeat('a', 0), "", NULL);

	m_safe_assert(char *, ft_chr_repeat('\0', 1), "", NULL);
	m_safe_assert(char *, ft_chr_repeat('a', 1), "a", NULL);

	m_safe_assert(char *, ft_chr_repeat('\0', 2), "", NULL);
	m_safe_assert(char *, ft_chr_repeat('a', 2), "aa", NULL);
}

////////////////////////////////////////////////////////////////////////////////
