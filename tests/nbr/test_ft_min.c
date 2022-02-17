/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_min.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 17:26:34 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/16 17:26:50 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_min)
{
	ASSERT(ft_min(1, 2), 1);
	ASSERT(ft_min(2, 2), 2);
	ASSERT(ft_min(3, 2), 2);
	ASSERT(ft_min(-1, -2), -2);
	ASSERT(ft_min(-2, -2), -2);
	ASSERT(ft_min(-3, -2), -3);
	ASSERT(ft_min(0, -1), -1);
	ASSERT(ft_min(0, 0), 0);
}

////////////////////////////////////////////////////////////////////////////////