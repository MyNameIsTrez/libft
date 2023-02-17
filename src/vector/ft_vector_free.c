/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_free.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:06:15 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 17:14:49 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/allocating/ft_allocating.h"
#include "src/vector/private/ft_private_vector.h"
#include "src/mem/ft_mem.h"

#include <stddef.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Doesn't ft_free vector contents, only the @p vector_ptr itself,
 * along with its metadata. TODO: Use swapping for freeing stuff?
 *
 * @param vector
 * @return
 */
void	ft_vector_free(void *vector_ptr)
{
	void		**_vector_ptr;
	t_metadata	*metadata_ptr;
	t_metadata	*vector_of_metadata;
	size_t		element_size;

	_vector_ptr = vector_ptr;
	if (*_vector_ptr == NULL)
		return ;
	metadata_ptr = get_metadata_ptr(*_vector_ptr);
	ft_free(_vector_ptr);
	if (metadata_ptr == NULL)
		return ;
	vector_of_metadata = get_vector_of_metadata();
	element_size = vector_of_metadata[0].element_size;
	ft_memmove(metadata_ptr, metadata_ptr + element_size, \
		get_bytes_after_metadata(metadata_ptr, element_size));
	vector_of_metadata[0].size--;
}

////////////////////////////////////////////////////////////////////////////////
