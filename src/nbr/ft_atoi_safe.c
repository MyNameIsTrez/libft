/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_safe.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:20 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/23 16:58:55 by sbos          ########   odam.nl         */
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
 * @brief Converts @p str to a signed int and puts it in the pointer @p nbr.
 * This function is safer than ft_atoi() because it returns a boolean that
 * is false when no number was found in @p str.
 * With ft_atoi("0") and ft_atoi("a") you can't tell whether @p str
 * contains a number, because those calls both return 0.
 *
 * @param str May start with whitespace, and the first encountered number will
 * be converted to a signed int.
 * @param nbr The signed int will be put in here.
 * The dereferenced value won't be touched if no number was found in the string.
 * @return true if a number was found in @p str, false otherwise.
 */
bool	ft_atoi_safe(const char *str, int *nbr)
{
	long	sign;

	if (str == NULL)
		return (false);
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
	if (!ft_isdigit(str[0]))
		return (false);
	*nbr = (int)(sign * get_number_without_minus(str));
	return (true);
}
