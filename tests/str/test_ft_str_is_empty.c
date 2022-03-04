/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_str_is_empty.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 16:29:46 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/04 15:15:59 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_str_is_empty)
{
	massert(ft_str_is_empty(""), (bool)true);
	massert(ft_str_is_empty("foo"), (bool)false);
}

////////////////////////////////////////////////////////////////////////////////
