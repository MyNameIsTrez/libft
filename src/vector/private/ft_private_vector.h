/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_private_vector.h                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 13:57:13 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 14:04:19 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef FT_PRIVATE_VECTOR_H
# define FT_PRIVATE_VECTOR_H

////////////////////////////////////////////////////////////////////////////////

# include "metadata/ft_private_vector_metadata.h"
# include "ft_private_vector_metadata_struct.h"

////////////////////////////////////////////////////////////////////////////////

size_t		get_bytes_after_metadata(t_metadata *metadata_ptr,
				size_t element_size);
size_t		vector_get_element_size(void *vector);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
