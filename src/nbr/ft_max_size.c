/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_max_size.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 14:09:43 by sbos          #+#    #+#                 */
/*   Updated: 2023/02/07 14:09:43 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Checks whether @p a is bigger than @p b.
 *
 * @param a
 * @param b
 * @return The biggest number.
 */
size_t	ft_max_size(const size_t a, const size_t b)
{
	if (a > b)
		return (a);
	return (b);
}
