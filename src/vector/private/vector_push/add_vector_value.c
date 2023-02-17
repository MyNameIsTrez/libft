/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_vector_value.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/26 16:54:19 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 16:56:48 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/vector/private/ft_private_vector_metadata_struct.h"
#include "src/helper_headers/ft_types.h"
#include "src/mem/ft_mem.h"

#include <stddef.h>

////////////////////////////////////////////////////////////////////////////////

void	add_vector_value(t_metadata *metadata_ptr, t_u8 *vector,
			void *value_ptr)
{
	size_t		element_size;
	size_t		pushed_value_offset;

	element_size = metadata_ptr->element_size;
	pushed_value_offset = metadata_ptr->size * element_size;
	ft_memmove(vector + pushed_value_offset, value_ptr, element_size);
	metadata_ptr->size++;
}

////////////////////////////////////////////////////////////////////////////////
