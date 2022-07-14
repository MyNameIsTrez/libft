/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_nbr_to_str.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 16:16:40 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/04 17:37:49 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

STATIC void	add_unsigned_digits_to_str(char *str, uintmax_t nbr,
										size_t number_len, t_u32 base)
{
	t_i32	digit;

	if (nbr == 0)
		str[0] = '0';
	while (nbr != 0)
	{
		digit = (t_i32)(nbr % base);
		str[number_len - 1] = ft_digit_to_char_base(digit, base);
		number_len--;
		nbr /= base;
	}
}

/**
 * @brief Converts uintmax_t @p nbr to a string in @p base.
 * This function was made for ft_printf() its hex printing.
 *
 * @param number
 * @param base
 * @return
 */
char	*ft_unsigned_nbr_to_str(uintmax_t number, t_u32 base)
{
	char	*str;
	size_t	number_len;

	number_len = ft_get_digit_count_base_unsigned(number, base);
	str = ft_stralloc(number_len);
	if (str == NULL)
		return (NULL);
	add_unsigned_digits_to_str(str, number, number_len, base);
	return (str);
}

////////////////////////////////////////////////////////////////////////////////
