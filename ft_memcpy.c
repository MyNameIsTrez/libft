/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:42 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 15:23:20 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Copies a memory area dangerously.
 *
 * @param dst
 * @param src
 * @param len
 * @return
 */
void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_copy;
	char	*src_copy;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_copy = (char *)dst;
	src_copy = (char *)src;
	i = 0;
	while (i < len)
	{
		dst_copy[i] = src_copy[i];
		i++;
	}
	return (dst);
}
