/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:39:51 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:47:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "char/ft_char.h"
#include "helper_headers/ft_defines.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Converts a lower-case letter to its corresponding upper-case letter.
 *
 * @param chr
 * @return If the argument is a lower-case letter, the corresponding upper-case
   letter is returned if there is one;\n
   Otherwise, the argument is returned unchanged.
 */
t_i32	ft_toupper(t_i32 chr)
{
	if (ft_is_lower((char)chr))
		return (chr - LOWER_UPPER_DIFFERENCE);
	return (chr);
}

////////////////////////////////////////////////////////////////////////////////
