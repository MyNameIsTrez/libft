/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_digit_count_base_unsigned.c                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/20 12:00:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:41:16 by sbos          ########   odam.nl         */
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
size_t	ft_get_digit_count_base_unsigned(uintmax_t nbr, t_u32 base)
{
	size_t		len;

	len = 0;
	if (nbr == 0)
		len++;
	while (nbr != 0)
	{
		nbr /= base;
		len++;
	}
	return (len);
}
