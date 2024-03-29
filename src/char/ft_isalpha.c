/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 15:16:20 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:47:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/helper_headers/ft_types.h"

/**
 * @brief Checks if @p chr is alphabetic.
 *
 * @param chr
 * @return 1 if true, 0 if false.
 */
t_i32	ft_isalpha(t_i32 chr)
{
	return (('A' <= chr && chr <= 'Z') || ('a' <= chr && chr <= 'z'));
}
