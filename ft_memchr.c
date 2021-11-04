/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:46 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/04 15:27:27 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Scans the initial @p len bytes of the memory area pointed to by @p ptr
   for the first instance of @p chr.\n
   Both @p chr and the bytes of the memory area pointed to by @p ptr
   are interpreted as unsigned char.
 *
 * @param ptr
 * @param chr
 * @param len
 * @return A pointer to the located @p chr;\n
 * NULL if @p chr isn't in @p len bytes of @p ptr.
 */
void	*ft_memchr(const void *ptr, int chr, size_t len)
{
	char			*ptr_;
	unsigned char	chr_;
	size_t			i;

	ptr_ = (char *)ptr;
	chr_ = (unsigned char)chr;
	i = 0;
	while (i < len)
	{
		if (ptr_[i] == chr_)
			return ((void *)&ptr_[i]);
		i++;
	}
	return (NULL);
}
