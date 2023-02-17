/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:20 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:47:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/nbr/ft_nbr.h"

/**
 * @brief Converts @p str to a t_i32.
 *
 * @param str May start with whitespace, and the first encountered number will
 * be converted to a t_i32.
 * @return The converted value or 0 if no number was found in @p str.
 */
t_i32	ft_atoi(const char *str)
{
	return (ft_atoi_range(str, NULL));
}
