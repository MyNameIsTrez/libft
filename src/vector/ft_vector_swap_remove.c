/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_swap_remove.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:04:30 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 17:13:49 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/helper_headers/ft_types.h"
#include "src/mem/ft_mem.h"
#include "src/vector/ft_vector.h"
#include "src/vector/private/ft_private_vector.h"
#include "src/vector/private/metadata/metadata_getters/\
ft_private_vector_metadata_getters.h"

/**
 * @brief Passing an @p index that is out of bounds is UB.
 *
 * @param vector_ptr
 * @param index
 */
void	ft_vector_swap_remove(t_vector_ptr vector_ptr, size_t index)
{
	t_u8		**_vector_ptr;
	t_metadata	*metadata_ptr;
	size_t		element_size;

	_vector_ptr = vector_ptr;
	metadata_ptr = get_metadata_ptr(*_vector_ptr);
	element_size = metadata_ptr->element_size;
	ft_memmove(*_vector_ptr + index * element_size,
		*_vector_ptr + (metadata_ptr->size - 1) * element_size, element_size);
	metadata_ptr->size--;
}
