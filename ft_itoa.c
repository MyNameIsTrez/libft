/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:10 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/20 13:14:00 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static char	*ft_stralloc(size_t n)
{
	char	*str;

	str = malloc(n + 1);
	str[n] = '\0';
	return (str);
}



static char	ft_digit_to_char(const int n)
{
	if (0 <= n && n <= 9)
	{
		return (n + '0');
	}
	return ('\0');
}

// mag is 2

// while (foo)
// {
// 	digit = foo % 10;
// 	str[mag] = digit;
// 	mag--;
// 	foo = foo / 10;
// }

// 152 / 10 -> 15
// 152 % 10 = 2;

// 15 / 10 -> 1
// 15 % 10 = 5;

// 1 / 10 -> 0
// 1 % 10 = 1;
static void	add_digits_to_str(char *str, size_t i, int n, size_t number_len)
{
	int	digit;

	while (n)
	{
		digit = n % 10;
		str[number_len] = ft_digit_to_char(digit);
		number_len--;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	// char			*str;
	// const size_t	number_len = ft_get_number_len(n);
	// const int		is_negative = n < 0;
	// size_t			i;

	// str = ft_stralloc(number_len + is_negative);
	// i = 0;
	// if (is_negative)
	// {
	// 	str[0] = '-';
	// 	i++;
	// }
	// add_digits_to_str(str, i, n, number_len);
	// return (str);
}
