/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_digit_to_char.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 13:47:28 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/04 17:36:07 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a digit @p nbr to its corresponding character in base 10.
 *
 * @param nbr
 * @return
 */
char	ft_digit_to_char(const int nbr)
{
	return (ft_digit_to_char_base(nbr, 10));
}
