/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_private_vector.h                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 13:57:13 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 16:11:39 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef FT_PRIVATE_VECTOR_H
# define FT_PRIVATE_VECTOR_H

////////////////////////////////////////////////////////////////////////////////

# include "metadata/ft_private_vector_metadata.h"
# include "ft_private_vector_metadata_struct.h"

# include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////

size_t		get_bytes_after_metadata(t_metadata *metadata_ptr,
				size_t element_size);
bool		is_bookkeeping_vector(t_metadata *metadata_ptr);
t_status	vector_register(void *vector, size_t element_size,
				size_t capacity);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
