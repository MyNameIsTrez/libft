/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:20 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/31 18:08:16 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Converts @p str to a signed int.
 *
 * @param str May start with whitespace, and the first encountered number will
 * be converted to a signed int.
 * @return The converted value or 0 if no number was found in @p str.
 */
int	ft_atoi(const char *str)
{
	return (ft_atoi_range(str, NULL));
}

////////////////////////////////////////////////////////////////////////////////
