/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_range.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/31 17:01:27 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/31 17:34:18 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"
#include <limits.h>

////////////////////////////////////////////////////////////////////////////////

STATIC int	get_number_with_minus(const char *str, bool *out_of_range)
{
	const static int	range_bound = INT_MIN / 10;
	const static int	range_last_digit = -(INT_MIN % 10);
	int					integer;
	size_t				i;
	int					digit;

	integer = 0;
	i = 0;
	while (ft_isdigit(str[i]))
	{
		digit = ft_char_to_digit(str[i]);
		if (integer < range_bound)
			*out_of_range = true;
		else if (integer == range_bound && digit > range_last_digit)
			*out_of_range = true;
		integer *= 10;
		integer -= digit;
		i++;
	}
	return (integer);
}

/**
 * @brief Converts @p str to a signed int. This function is only supposed to be
 * used by ft_atoi() and ft_atoi_safe().
 *
 * @param str May start with whitespace, and the first encountered number will
 * be converted to a signed int.
 * @param out_of_range
 * @return The converted value or 0 if no number was found in @p str.
 */
int	ft_atoi_range(const char *str, bool *out_of_range)
{
	int		sign;
	int		result;
	bool	temp;

	if (out_of_range == NULL)
		out_of_range = &temp;
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
	result = get_number_with_minus(str, out_of_range);
	if (sign == 1 && result == INT_MIN)
		*out_of_range = true;
	return (-sign * result);
}

////////////////////////////////////////////////////////////////////////////////
