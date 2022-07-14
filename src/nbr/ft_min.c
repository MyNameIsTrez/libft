/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_min.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 14:33:17 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/10 16:26:01 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Checks whether @p a is smaller than @p b.
 *
 * @param a
 * @param b
 * @return The smallest number.
 */
t_i32	ft_min(const t_i32 a, const t_i32 b)
{
	if (a < b)
		return (a);
	return (b);
}

////////////////////////////////////////////////////////////////////////////////
