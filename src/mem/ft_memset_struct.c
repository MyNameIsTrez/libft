/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset_struct.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/16 16:55:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/18 13:56:43 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/helper_headers/ft_types.h"
#include "src/mem/ft_mem.h"

#include <stddef.h>

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
	t_u8	*_dst;

	i = 0;
	struct_count = dst_length / struct_size;
	_dst = dst;
	while (i < struct_count)
	{
		ft_memcpy(&_dst[i * struct_size], struct_, struct_size);
		i++;
	}
	return (dst);
}

////////////////////////////////////////////////////////////////////////////////
