/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:10 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 15:33:49 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_stralloc(const size_t len)
{
	return (ft_calloc(len + 1, sizeof(char)));
}

// TODO: Replace this with log()!
static size_t	ft_get_number_len(int nbr)
{
	size_t	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static char	ft_digit_to_char(int digit)
{
	if (0 <= digit && digit <= 9)
		return (digit + '0');
	return ('\0');
}

static void	add_digits_to_str(char *str, int nbr, size_t number_len)
{
	int	digit;

	if (nbr == 0)
		str[0] = '0';
	while (nbr != 0)
	{
		digit = -(nbr % 10);
		str[number_len - 1] = ft_digit_to_char(digit);
		number_len--;
		nbr /= 10;
	}
}

char	*ft_itoa(int nbr)
{
	char			*str;
	const size_t	number_len = ft_get_number_len(nbr);

	str = ft_stralloc(number_len);
	if (str == NULL)
		return (NULL);
	if (nbr >= 0)
		nbr = -nbr;
	else
		str[0] = '-';
	add_digits_to_str(str, nbr, number_len);
	return (str);
}
