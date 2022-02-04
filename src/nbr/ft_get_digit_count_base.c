/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_digit_count_base.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/20 12:00:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/04 17:13:03 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Counts the number of digits in @p nbr with a specified @p base.
 * This function was made for ft_int_to_str_base().
 *
 * @param nbr
 * @return
 */
size_t	ft_get_digit_count_base(int nbr, unsigned int base)
{
	size_t		len;
	const int	base_ = (int)base;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr /= base_;
		len++;
	}
	return (len);
}