/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:20 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/18 14:48:43 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// static size_t	get_real_strlen(const char *string)
// {
// 	int	index;

// 	index = 0;
// 	while (ft_isdigit(string[index]))
// 	{
// 		index++;
// 	}
// 	return (index);
// }

// static int	multiply_by_10(int value, int loops)
// {
// 	while (loops > 0)
// 	{
// 		value *= 10;
// 		loops--;
// 	}
// 	return (value);
// }

// static int	digit_to_value(const char c)
// {
// 	if ('0' <= c && c <= '9')
// 	{
// 		return (c - '0');
// 	}
// 	return (-1);
// }

// static int	get_positive_integer(const char *string)
// {
// 	const size_t	length = get_real_strlen(string);
// 	int				integer;
// 	size_t			index;
// 	char			character;

// 	integer = 0;
// 	index = 0;
// 	while (index < length)
// 	{
// 		character = string[index];
// 		if (digit_to_value(character) == -1)
// 		{
// 			return (0);
// 		}
// 		integer += multiply_by_10(digit_to_value(character), length - index - 1);
// 		index++;
// 	}
// 	return (integer);
// }

int	ft_atoi(const char *string)
{
	// int		sign;

	// strtrim_whitespace(string);
	// if (string[0] == '-')
	// {
	// 	sign = -1;
	// 	string++;
	// }
	// else if (string[0] == '+')
	// {
	// 	sign = 1;
	// 	string++;
	// }
	// return (sign * get_positive_integer(string));
}
