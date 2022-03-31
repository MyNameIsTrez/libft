/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:20 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/31 17:33:57 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

// STATIC long	get_number_without_minus(const char *str)
// {
// 	long	integer;
// 	size_t	i;
// 	char	chr;

// 	integer = 0;
// 	i = 0;
// 	while (ft_isdigit(str[i]))
// 	{
// 		chr = str[i];
// 		if (ft_char_to_digit(chr) == -1)
// 			return (0);
// 		integer *= 10;
// 		integer += ft_char_to_digit(chr);
// 		i++;
// 	}
// 	return (integer);
// }

/**
 * @brief Converts @p str to a signed int.
 *
 * @param str May start with whitespace, and the first encountered number will
 * be converted to a signed int.
 * @return The converted value or 0 if no number was found in @p str.
 */
int	ft_atoi(const char *str)
{
	return (ft_atoi_range(str, NULL));
}

////////////////////////////////////////////////////////////////////////////////
