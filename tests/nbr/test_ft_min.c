/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_min.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 17:26:34 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_min)
{
	massert(ft_min(1, 2), 1);
	massert(ft_min(2, 2), 2);
	massert(ft_min(3, 2), 2);
	massert(ft_min(-1, -2), -2);
	massert(ft_min(-2, -2), -2);
	massert(ft_min(-3, -2), -3);
	massert(ft_min(0, -1), -1);
	massert(ft_min(0, 0), 0);
}

////////////////////////////////////////////////////////////////////////////////
