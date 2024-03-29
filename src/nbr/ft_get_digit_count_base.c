/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_digit_count_base.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/20 12:00:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 16:34:50 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/helper_headers/ft_types.h"

#include <stddef.h>

/**
 * @brief Counts the number of digits in @p nbr with a specified @p base.
 * This function was made for ft_nbr_to_str().
 *
 * @param nbr
 * @return
 */
size_t	ft_get_digit_count_base(intmax_t nbr, t_u32 base)
{
	size_t	len;
	t_i32	base_;

	base_ = (t_i32)base;
	if (nbr == 0)
		return (1);
	len = 0;
	while (nbr != 0)
	{
		nbr /= base_;
		len++;
	}
	return (len);
}
