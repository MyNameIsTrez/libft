/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:20 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 16:07:08 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char	*ft_strtrim_whitespace(char const *str)
{
	return (ft_strtrim(str, "\t\n\v\f\r "));
}

static int	digit_to_value(const char chr)
{
	if ('0' <= chr && chr <= '9')
		return (chr - '0');
	return (-1);
}

static int	get_positive_integer(const char *str)
{
	int		integer;
	size_t	i;
	char	chr;

	integer = 0;
	i = 0;
	while (ft_isdigit(str[i]))
	{
		chr = str[i];
		if (digit_to_value(chr) == -1)
			return (0);
		integer *= 10;
		integer += digit_to_value(chr);
		i++;
	}
	return (integer);
}

int	ft_atoi(const char *str)
{
	int		sign;

	str = (const char *)ft_strtrim_whitespace(str);
	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
		str++;
	}
	else if (str[0] == '+')
		str++;
	return (sign * get_positive_integer(str));
}
