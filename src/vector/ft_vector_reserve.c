/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_reserve.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:06:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 16:17:22 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "private/ft_private_vector.h"

////////////////////////////////////////////////////////////////////////////////

t_status	ft_vector_reserve(void *vector_ptr, size_t additional_elements)
{
	void		**_vector_ptr;
	t_metadata	*metadata_ptr;
	t_metadata	*temp_metadata_ptr;
	size_t		old_count;
	size_t		new_count;
	bool		_is_bookkeeping_vector;

	_vector_ptr = vector_ptr;
	metadata_ptr = get_metadata_ptr(*_vector_ptr);
	if (metadata_ptr == NULL)
		return (ERROR);
	old_count = metadata_ptr->capacity;
	new_count = old_count + additional_elements;
	_is_bookkeeping_vector = is_bookkeeping_vector(metadata_ptr);
	temp_metadata_ptr = ft_remalloc(&metadata_ptr->address, old_count, \
							new_count, metadata_ptr->element_size);
	if (_is_bookkeeping_vector)
		metadata_ptr = temp_metadata_ptr;
	if (temp_metadata_ptr == NULL)
		return (ERROR);
	metadata_ptr->address = temp_metadata_ptr;
	*_vector_ptr = metadata_ptr->address;
	metadata_ptr->capacity += additional_elements;
	return (OK);
}

////////////////////////////////////////////////////////////////////////////////
