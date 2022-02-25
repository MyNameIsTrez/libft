/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_str_eq.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 16:29:46 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_str_eq)
{
	massert(ft_str_eq("hello", "hello"), (bool)true);
	massert(ft_str_eq("hello", "world"), (bool)false);
}

////////////////////////////////////////////////////////////////////////////////