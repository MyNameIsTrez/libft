/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_min_int.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 14:08:31 by sbos          #+#    #+#                 */
/*   Updated: 2023/02/07 14:08:31 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/helper_headers/ft_types.h"

/**
 * @brief Checks whether @p a is smaller than @p b.
 *
 * @param a
 * @param b
 * @return The smallest number.
 */
t_i32	ft_min_int(const t_i32 a, const t_i32 b)
{
	if (a < b)
		return (a);
	return (b);
}
