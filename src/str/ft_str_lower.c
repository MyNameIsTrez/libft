/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_lower.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 18:34:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/22 17:24:18 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

static void	striteri_tolower(unsigned int i, char *chr)
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
