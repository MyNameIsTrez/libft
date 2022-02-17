/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_strstr.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 17:39:19 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/17 17:40:54 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_strstr)
{
	ASSERT(ft_strstr("foobar", ""), strstr("foobar", ""));
	ASSERT(ft_strstr("foobar", "b"), strstr("foobar", "b"));
	ASSERT(ft_strstr("foobar", "ob"), strstr("foobar", "ob"));
	ASSERT((void *)ft_strstr("foobar", "baro"), (void *)strstr("foobar", "baro"));
	ASSERT((void *)ft_strstr("lorem ipsum dolor sit amet", "ipsumm"), (void *)strstr("lorem ipsum dolor sit amet", "ipsumm"));
}

////////////////////////////////////////////////////////////////////////////////
