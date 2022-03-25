/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_substr.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 17:44:28 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 16:09:25 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_substr)
{
	m_safe_assert(char *, ft_substr("lorem ipsum dolor sit amet", 400, 20), "", NULL);
	m_safe_assert(char *, ft_substr("lorem ipsum dolor sit amet", 5, 0), "", NULL);
	m_safe_assert(char *, ft_substr("lorem ipsum dolor sit amet", 0, 0), "", NULL);
	m_safe_assert(char *, ft_substr(" a", 1, 1), "a", NULL);
}

////////////////////////////////////////////////////////////////////////////////
