/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:20 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/19 16:16:33 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char	*ft_strtrim_whitespace(char const *string)
{
	return (ft_strtrim(string, " \t\n\v\f\r"));
}

static int	digit_to_value(const char c)
{
	if ('0' <= c && c <= '9')
	{
		return (c - '0');
	}
	return (-1);
}

static int	get_positive_integer(const char *string)
{
	int		integer;
	size_t	index;
	char	character;

	integer = 0;
	index = 0;
	while (ft_isdigit(string[index]))
	{
		character = string[index];
		if (digit_to_value(character) == -1)
		{
			return (0);
		}
		integer *= 10;
		integer += digit_to_value(character);
		index++;
	}
	return (integer);
}

int	ft_atoi(const char *old_string)
{
	char	*string;
	int		sign;

	string = ft_strtrim_whitespace(old_string);
	sign = 1;
	if (string[0] == '-')
	{
		sign = -1;
		string++;
	}
	else if (string[0] == '+')
		string++;
	return (sign * get_positive_integer(string));
}
