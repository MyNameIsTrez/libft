/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_int_to_str_base.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 16:16:40 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/04 17:37:49 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	add_digits_to_str(char *str, int nbr, size_t number_len,
								unsigned int base)
{
	int			digit;
	const int	base_ = (int)base;

	if (nbr == 0)
		str[0] = '0';
	while (nbr != 0)
	{
		digit = -(nbr % base_);
		str[number_len - 1] = ft_digit_to_char_base(digit, base);
		number_len--;
		nbr /= base_;
	}
}

/**
 * @brief Converts signed int @p nbr to a string in @p base.
 * This function was made for ft_printf() its hex printing.
 *
 * @param number
 * @param base
 * @return
 */
char	*ft_int_to_str_base(int number, unsigned int base)
{
	char			*str;
	const size_t	number_len = ft_get_digit_count_base(number, base);

	str = ft_stralloc(number_len);
	if (str == NULL)
		return (NULL);
	if (number >= 0)
		number = -number;
	else
		str[0] = '-';
	add_digits_to_str(str, number, number_len, base);
	return (str);
}