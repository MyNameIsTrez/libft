/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ADDITIONAL_ft_strnlen.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/12 13:54:15 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/12 15:53:07 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && len < maxlen)
	{
		len++;
	}
	return (len);
}
