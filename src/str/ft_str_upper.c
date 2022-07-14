/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_upper.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 18:34:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:41:16 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

STATIC void	striteri_toupper(t_u32 i, char *chr)
{
	(void)i;
	(*chr) = (char)ft_toupper(*chr);
}

/**
 * @brief Uppercases all alphabetical characters in @p str.
 *
 * @param str
 * @return
 */
char	*ft_str_upper(char *str)
{
	ft_striteri(str, striteri_toupper);
	return (str);
}

////////////////////////////////////////////////////////////////////////////////
