/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_digit_count.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/20 12:00:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/04 17:38:13 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of digits in @p nbr.
 *
 * @param nbr
 * @return
 */
size_t	ft_get_digit_count(int nbr)
{
	return (ft_get_digit_count_base(nbr, 10));
}