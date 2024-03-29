/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:10 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:47:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/nbr/ft_nbr.h"

/**
 * @brief Converts t_i32 @p nbr to a string.
 *
 * @param nbr The integer to convert.
 * @return The string representing the integer;\n
   NULL if the allocation fails.
 */
char	*ft_itoa(t_i32 nbr)
{
	return (ft_nbr_to_str(nbr, 10));
}
