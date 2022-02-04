/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:10 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/04 17:20:26 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts signed int @p nbr to a string.
 *
 * @param nbr The integer to convert.
 * @return The string representing the integer;\n
   NULL if the allocation fails.
 */
char	*ft_itoa(int nbr)
{
	return (ft_int_to_str_base(nbr, 10));
}
