/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_get_digit_count_base.c                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 17:20:28 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 12:54:14 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_get_digit_count_base)
{
	{
		ASSERT(ft_get_digit_count_base(0b1, 2), (size_t)1);
		ASSERT(ft_get_digit_count_base(0b101110, 2), (size_t)6);
		ASSERT(ft_get_digit_count_base(1, 10), (size_t)1);
		ASSERT(ft_get_digit_count_base(123, 10), (size_t)3);
		ASSERT(ft_get_digit_count_base(1, 16), (size_t)1);
		ASSERT(ft_get_digit_count_base(0x123, 16), (size_t)3);
	}
	{
		ASSERT(ft_get_digit_count_base(-0b1, 2), (size_t)1);
		ASSERT(ft_get_digit_count_base(-0b101110, 2), (size_t)6);
		ASSERT(ft_get_digit_count_base(-1, 10), (size_t)1);
		ASSERT(ft_get_digit_count_base(-123, 10), (size_t)3);
		ASSERT(ft_get_digit_count_base(-1, 16), (size_t)1);
		ASSERT(ft_get_digit_count_base(-0x123, 16), (size_t)3);
	}
}

////////////////////////////////////////////////////////////////////////////////
