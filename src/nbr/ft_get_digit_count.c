/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_digit_count.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/20 12:00:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 14:46:40 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/nbr/ft_nbr.h"

/**
 * @brief Counts the number of digits in @p nbr.
 *
 * @param nbr
 * @return
 */
size_t	ft_get_digit_count(intmax_t nbr)
{
	return (ft_get_digit_count_base(nbr, 10));
}
