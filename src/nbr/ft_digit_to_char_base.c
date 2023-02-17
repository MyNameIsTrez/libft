/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_digit_to_char_base.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 17:27:53 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:47:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/helper_headers/ft_defines.h"
#include "src/helper_headers/ft_types.h"

/**
 * @brief Converts a digit @p nbr to its corresponding character in @p base.
 *
 * @param nbr
 * @return
 */
char	ft_digit_to_char_base(t_i32 nbr, t_u32 base)
{
	if (0 <= nbr && nbr < (t_i32)base)
		return (HEX_BASE_CHARACTERS[nbr]);
	else
		return ('\0');
}
