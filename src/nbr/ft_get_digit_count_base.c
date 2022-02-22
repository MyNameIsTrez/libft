/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_digit_count_base.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/20 12:00:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 12:56:31 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft_nbr.h"

/**
 * @brief Counts the number of digits in @p nbr with a specified @p base.
 * This function was made for ft_nbr_to_str().
 *
 * @param nbr
 * @return
 */
size_t	ft_get_digit_count_base(intmax_t nbr, unsigned int base)
{
	size_t		len;
	const int	base_ = (int)base;

	len = 0;
	while (nbr != 0)
	{
		nbr /= base_;
		len++;
	}
	return (len);
}
