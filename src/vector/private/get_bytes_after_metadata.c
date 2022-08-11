/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_bytes_after_metadata.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 12:57:54 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 13:16:49 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

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
