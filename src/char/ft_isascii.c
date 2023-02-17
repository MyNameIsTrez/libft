/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:24:17 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:47:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/helper_headers/ft_types.h"

/**
 * @brief Checks if @p chr is ASCII (non-extended).
 *
 * @param chr
 * @return 1 if true, 0 if false.
 */
t_i32	ft_isascii(t_i32 chr)
{
	return (0 <= chr && chr <= 127);
}
