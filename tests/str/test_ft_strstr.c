/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_strstr.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 17:39:19 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_strstr)
{
	massert(ft_strstr("foobar", ""), strstr("foobar", ""));
	massert(ft_strstr("foobar", "b"), strstr("foobar", "b"));
	massert(ft_strstr("foobar", "ob"), strstr("foobar", "ob"));
	massert((void *)ft_strstr("foobar", "baro"), (void *)strstr("foobar", "baro"));
	massert((void *)ft_strstr("lorem ipsum dolor sit amet", "ipsumm"), (void *)strstr("lorem ipsum dolor sit amet", "ipsumm"));
}

////////////////////////////////////////////////////////////////////////////////
