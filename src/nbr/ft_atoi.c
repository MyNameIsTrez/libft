/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:20 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/04 17:18:01 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	get_number_without_minus(const char *str)
{
	long	integer;
	size_t	i;
	char	chr;

	integer = 0;
	i = 0;
	while (ft_isdigit(str[i]))
	{
		chr = str[i];
		if (ft_char_to_digit(chr) == -1)
			return (0);
		integer *= 10;
		integer += ft_char_to_digit(chr);
		i++;
	}
	return (integer);
}

/**
 * @brief Converts @p str to a signed int.
 *
 * @param str May start with whitespace, and the first encountered number will
 * be converted.
 * @return The converted value or 0 on error.
 */
int	ft_atoi(const char *str)
{
	long	sign;
	int		result;

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
	result = (int)(sign * get_number_without_minus(str));
	return (result);
}
