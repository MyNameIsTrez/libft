/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:10 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/25 18:16:31 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/**
 * @brief Converts signed int @p nbr to a string.
 *
 * @param nbr The integer to convert.
 * @return The string representing the integer;\n
   NULL if the allocation fails.
 */
char	*ft_itoa(int nbr)
{
	char			*str;
	const size_t	number_len = ft_get_number_of_digits(nbr);

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
