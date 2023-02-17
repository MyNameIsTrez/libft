/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector_register.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 09:57:40 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 16:18:29 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/vector/ft_vector.h"
#include "src/vector/private/ft_private_vector.h"
#include "src/vector/private/metadata/metadata_getters/\
ft_private_vector_metadata_getters.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Calling this before `try_init_vector_of_metadata_ptr()` is UB.
 *
 * @param vector
 * @param element_size
 * @param capacity
 * @return
 */
t_status	vector_register(void *vector, size_t element_size,
				size_t capacity)
{
	t_metadata	**vector_of_metadata_ptr;
	t_metadata	metadata;

	vector_of_metadata_ptr = get_vector_of_metadata_ptr();
	metadata.size = 0;
	metadata.capacity = capacity;
	metadata.element_size = element_size;
	metadata.address = vector;
	return (ft_vector_push(vector_of_metadata_ptr, &metadata));
}

////////////////////////////////////////////////////////////////////////////////
