/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:17 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 14:53:27 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Applies the function @p fun to each character of the string @p str,
   passing the character's index and address to @p fun.\n
   @p fun is able to modify the characters in @p str using the address.
 *
 * @param str The string on which to iterate.
 * @param fun The function to apply to each character.
 */
void	ft_striteri(char *str, void (*fun)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		fun(i, &str[i]);
		i++;
	}
}

////////////////////////////////////////////////////////////////////////////////
