/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset_struct.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/16 16:55:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/16 17:07:24 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief
 *
 * @param dst
 * @param struct_size
 * @param dst_length
 * @return
 */

/**
 * @brief Fills @p dst with copies of struct @p struct_.
 *
 * @param dst
 * @param struc
 * @param struct_size
 * @param dst_length
 * @return
 */
void	*ft_memset_struct(void *dst, void *struct_, size_t struct_size,
			size_t dst_length)
{
	size_t	i;
	size_t	struct_count;

	i = 0;
	struct_count = dst_length / struct_size;
	while (i < struct_count)
	{
		ft_memcpy(&dst[i * struct_size], struct_, struct_size);
		i++;
	}
	return (dst);
}

////////////////////////////////////////////////////////////////////////////////
