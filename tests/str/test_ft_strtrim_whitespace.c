/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_strtrim_whitespace.c                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 17:41:08 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 16:09:25 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_strtrim_whitespace)
{
	m_safe_assert(char *, ft_strtrim_whitespace(" a"), "a", NULL);
	m_safe_assert(char *, ft_strtrim_whitespace(" \n\t foo bar \n\t "), "foo bar", NULL);
	m_safe_assert(char *, ft_strtrim_whitespace("\t\n\r\v\f  469 \n"), "469", NULL);
}

////////////////////////////////////////////////////////////////////////////////
