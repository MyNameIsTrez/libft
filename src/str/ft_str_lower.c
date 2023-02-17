/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_lower.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 18:34:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:41:16 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/char/ft_char.h"
#include "src/str/ft_str.h"

////////////////////////////////////////////////////////////////////////////////

static void	striteri_tolower(t_u32 i, char *chr)
{
	(void)i;
	(*chr) = (char)ft_tolower(*chr);
}

/**
 * @brief Lowercases all alphabetical characters in @p str.
 *
 * @param str
 * @return
 */
char	*ft_str_lower(char *str)
{
	ft_striteri(str, striteri_tolower);
	return (str);
}

////////////////////////////////////////////////////////////////////////////////
