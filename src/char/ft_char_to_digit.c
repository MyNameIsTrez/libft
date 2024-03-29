/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_char_to_digit.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/20 13:19:51 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 16:29:08 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/helper_headers/ft_types.h"

/**
 * @brief Converts a char to a digit.
 *
 * @param chr
 * @return
 */
t_i32	ft_char_to_digit(const char chr)
{
	if ('0' <= chr && chr <= '9')
		return (chr - '0');
	return (-1);
}
