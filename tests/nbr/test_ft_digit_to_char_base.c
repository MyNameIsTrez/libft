/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_digit_to_char_base.c                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 16:28:08 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_digit_to_char_base)
{
	{
		massert(ft_digit_to_char_base(0b0, 2), (char)'0');
		massert(ft_digit_to_char_base(0b1, 2), (char)'1');
	}
	{
		massert(ft_digit_to_char_base(07, 8), (char)'7');
		massert(ft_digit_to_char_base(8, 8), (char)'\0');
	}
	{
		massert(ft_digit_to_char_base(0, 10), (char)'0');
		massert(ft_digit_to_char_base(9, 10), (char)'9');
	}
	{
		massert(ft_digit_to_char_base(0, 16), (char)'0');
		massert(ft_digit_to_char_base(15, 16), (char)'f');
	}
}

////////////////////////////////////////////////////////////////////////////////
