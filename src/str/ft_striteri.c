/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:17 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:41:16 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/helper_headers/ft_types.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Applies the function @p fun to each character of the string @p str,
   passing the character's index and address to @p fun.\n
   @p fun is able to modify the characters in @p str using the address.
 *
 * @param str The string on which to iterate.
 * @param fun The function to apply to each character.
 */
void	ft_striteri(char *str, void (*fun)(t_u32, char*))
{
	t_u32	i;

	i = 0;
	while (str[i] != '\0')
	{
		fun(i, &str[i]);
		i++;
	}
}

////////////////////////////////////////////////////////////////////////////////
