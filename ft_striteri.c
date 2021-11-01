/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:17 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 16:56:02 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_striteri(char *str, void (*fun)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		fun(i, str + i);
		i++;
	}
}
