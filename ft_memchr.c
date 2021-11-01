/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:46 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 16:04:41 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *ptr, int chr, size_t len)
{
	size_t	i;
	char	*chr_ptr;

	chr_ptr = (char *)ptr;
	i = 0;
	while (i < len)
	{
		if (chr_ptr[i] == chr)
			return ((void *)&chr_ptr[i]);
		i++;
	}
	return (NULL);
}
