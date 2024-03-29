/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_min_size.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 14:08:31 by sbos          #+#    #+#                 */
/*   Updated: 2023/02/07 14:08:31 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Checks whether @p a is smaller than @p b.
 *
 * @param a
 * @param b
 * @return The smallest number.
 */
size_t	ft_min_size(const size_t a, const size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
