/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_reserve.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:06:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/12 17:10:22 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/ft_allocating.h"
#include "src/vector/private/ft_private_vector.h"
#include "src/vector/private/metadata/metadata_getters/\
ft_private_vector_metadata_getters.h"

#include <stddef.h>

t_status	ft_vector_reserve(void *vector_ptr, size_t new_count)
{
	void		**_vector_ptr;
	t_metadata	*metadata_ptr;
	t_metadata	*temp_metadata_ptr;
	bool		_is_bookkeeping_vector;

	_vector_ptr = vector_ptr;
	metadata_ptr = get_metadata_ptr(*_vector_ptr);
	if (metadata_ptr == NULL)
		return (ERROR);
	_is_bookkeeping_vector = is_bookkeeping_vector(metadata_ptr);
	temp_metadata_ptr = ft_remalloc(&metadata_ptr->address,
			metadata_ptr->capacity, new_count, metadata_ptr->element_size);
	if (_is_bookkeeping_vector)
		metadata_ptr = temp_metadata_ptr;
	if (temp_metadata_ptr == NULL)
		return (ERROR);
	metadata_ptr->address = temp_metadata_ptr;
	*_vector_ptr = metadata_ptr->address;
	metadata_ptr->capacity = new_count;
	return (OK);
}
