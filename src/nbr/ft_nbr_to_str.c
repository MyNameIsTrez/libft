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

#include "src/nbr/ft_nbr.h"
#include "src/str/ft_str.h"

static void	add_digits_to_str(char *str, intmax_t nbr, size_t number_len,
				t_u32 base)
{
	t_i32	digit;
	t_i32	base_;

	base_ = (t_i32)base;
	if (nbr == 0)
		str[0] = '0';
	while (nbr != 0)
	{
		digit = (t_i32) -(nbr % base_);
		str[number_len - 1] = ft_digit_to_char_base(digit, base);
		number_len--;
		nbr /= base_;
	}
}

/**
 * @brief Converts intmax_t @p nbr to a string in @p base.
 *
 * @param number
 * @param base
 * @return
 */
char	*ft_nbr_to_str(intmax_t number, t_u32 base)
{
	char	*str;
	size_t	number_len;

	number_len = ft_get_digit_count_base(number, base);
	if (number < 0)
		++number_len;
	str = ft_stralloc(number_len, "number string");
	if (str == NULL)
		return (NULL);
	if (number >= 0)
		number = -number;
	else
		str[0] = '-';
	add_digits_to_str(str, number, number_len, base);
	return (str);
}
