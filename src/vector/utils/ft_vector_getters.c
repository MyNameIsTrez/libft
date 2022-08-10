/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_getters.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 13:55:09 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/10 12:52:04 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

t_metadata	**get_vector_of_metadata_ptr(void)
{
	static t_metadata	*vector_of_metadata = NULL;

	if (vector_of_metadata == NULL)
	{
		vector_of_metadata = ft_malloc(1, sizeof(t_metadata));
		if (vector_of_metadata == NULL)
			return (NULL);
		vector_of_metadata[0].size = 1;
		vector_of_metadata[0].capacity = 1;
		vector_of_metadata[0].element_size = sizeof(t_metadata);
		vector_of_metadata[0].address = vector_of_metadata;
	}
	return (&vector_of_metadata);
}

t_metadata	*get_vector_of_metadata(void)
{
	t_metadata	**vector_of_metadata_ptr;

	vector_of_metadata_ptr = get_vector_of_metadata_ptr();
	if (vector_of_metadata_ptr == NULL)
		return (NULL);
	return (*vector_of_metadata_ptr);
}

t_metadata	*get_metadata_ptr(void *vector)
{
	t_metadata	*vector_of_metadata;
	size_t		index;

	vector_of_metadata = get_vector_of_metadata();
	if (vector_of_metadata == NULL)
		return (NULL);
	index = 0;
	while (index < vector_of_metadata[0].size)
	{
		if (vector_of_metadata[index].address == vector)
			return (&vector_of_metadata[index]);
		index++;
	}
	ft_set_error(FT_ERROR_VECTOR_NOT_FOUND);
	return (NULL);
}

////////////////////////////////////////////////////////////////////////////////

// TODO: Rename to get_remaining_byte_count or get_byte_count_on_right
size_t	get_bytes_after_metadata(t_metadata *metadata_ptr, size_t element_size)
{
	t_metadata	*vector_of_metadata;
	size_t		metadata_index;
	size_t		total_elements;
	size_t		metadata_position;
	size_t		shifted_elements;

	vector_of_metadata = get_vector_of_metadata();
	metadata_index = (size_t)(metadata_ptr - vector_of_metadata);
	total_elements = vector_of_metadata[0].size;
	metadata_position = metadata_index + 1;
	shifted_elements = total_elements - metadata_position;
	return (shifted_elements * element_size);
}

////////////////////////////////////////////////////////////////////////////////
