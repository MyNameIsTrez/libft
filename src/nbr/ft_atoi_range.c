/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_range.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/31 17:01:27 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 15:02:07 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "char/ft_char.h"
#include "helper_headers/ft_types.h"

#include <limits.h>
#include <stdbool.h>
#include <stddef.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Takes a @p str like "123" and returns -123. It returns a negative
 * number to circumvent overflow.
 *
 * @param str
 * @param out_of_range Set to true when multiplying by ten
 * or subtracting a digit results in underflow.
 * @return
 */
static t_i32	get_negative_value(const char *str, bool *out_of_range)
{
	static const t_i32	range_mult_ten = INT_MIN / 10;
	static const t_i32	range_last_digit = -(INT_MIN % 10);
	t_i32				value;
	size_t				i;
	t_i32				digit;

	value = 0;
	i = 0;
	while (ft_isdigit(str[i]))
	{
		digit = ft_char_to_digit(str[i]);
		if (value < range_mult_ten)
			*out_of_range = true;
		else if (value == range_mult_ten && digit > range_last_digit)
			*out_of_range = true;
		value *= 10;
		value -= digit;
		i++;
	}
	return (value);
}

/**
 * @brief Converts @p str to a t_i32. This function is only supposed to be
 * used by ft_atoi() and ft_atoi_safe().
 *
 * @param str May start with whitespace, and the first encountered number will
 * be converted to a t_i32.
 * @param out_of_range
 * @return The converted value or 0 if no number was found in @p str.
 */
t_i32	ft_atoi_range(const char *str, bool *out_of_range)
{
	t_i32	sign;
	t_i32	value;
	bool	dummy_out_of_range;

	if (out_of_range == NULL)
		out_of_range = &dummy_out_of_range;
	*out_of_range = false;
	while (ft_isspace(str[0]))
		str++;
	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
		str++;
	}
	else if (str[0] == '+')
		str++;
	value = get_negative_value(str, out_of_range);
	if (sign == 1 && value == INT_MIN)
		*out_of_range = true;
	return (-sign * value);
}

////////////////////////////////////////////////////////////////////////////////
