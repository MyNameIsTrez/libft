/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_digit_to_char.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 13:47:28 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:47:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/nbr/ft_nbr.h"

/**
 * @brief Converts a digit @p nbr to its corresponding character in base 10.
 *
 * @param nbr
 * @return
 */
char	ft_digit_to_char(t_i32 nbr)
{
	return (ft_digit_to_char_base(nbr, 10));
}
