/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_upper.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/04 18:34:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/04 17:35:41 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

static void	striteri_toupper(unsigned int i, char *chr)
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
	int	i;

	i = 0;
	ft_striteri(str, striteri_toupper);
	return (str);
}

////////////////////////////////////////////////////////////////////////////////
