/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:24:17 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:47:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Checks if @p chr is alphanumeric.
 *
 * @param chr
 * @return 1 if true, 0 if false.
 */
t_i32	ft_isalnum(t_i32 chr)
{
	return (ft_isalpha(chr) OR ft_isdigit(chr));
}

////////////////////////////////////////////////////////////////////////////////
