/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:10 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/20 17:38:23 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_stralloc(size_t n)
{
	char	*str;

	str = malloc(n + 1);
	if (str)
		str[n] = '\0';
	return (str);
}

// TODO: Replace this with log()!
static size_t	ft_get_number_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	ft_digit_to_char(int n)
{
	if (0 <= n && n <= 9)
	{
		return (n + '0');
	}
	return ('\0');
}

static void	add_digits_to_str(char *str, int n, size_t number_len)
{
	int	digit;

	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		digit = -(n % 10);
		str[number_len - 1] = ft_digit_to_char(digit);
		number_len--;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char			*str;
	const size_t	number_len = ft_get_number_len(n);

	str = ft_stralloc(number_len);
	if (!str)
		return (NULL);
	if (n >= 0)
		n = -n;
	else
		str[0] = '-';
	add_digits_to_str(str, n, number_len);
	return (str);
}
