/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:46 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:43:02 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Scans the initial @p len bytes of the memory area pointed to by @p ptr
   for the first instance of @p chr.
 *
 * @param ptr
 * @param chr
 * @param len
 * @return A pointer to the located @p chr;\n
 * NULL if @p chr isn't in @p len bytes of @p ptr.
 */
void	*ft_memchr(const void *ptr, int chr, size_t len)
{
	t_u8	*ptr_;
	t_u8	chr_;
	size_t			i;

	ptr_ = (t_u8 *)ptr;
	chr_ = (t_u8)chr;
	i = 0;
	while (i < len)
	{
		if (ptr_[i] == chr_)
			return (&ptr_[i]);
		i++;
	}
	return (NULL);
}

////////////////////////////////////////////////////////////////////////////////
