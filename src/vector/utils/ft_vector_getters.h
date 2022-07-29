/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_getters.h                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 13:55:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/29 20:41:29 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef FT_VECTOR_GETTERS_H
# define FT_VECTOR_GETTERS_H

////////////////////////////////////////////////////////////////////////////////

t_metadata	**get_vector_of_metadata_ptr(void);
t_metadata	*get_vector_of_metadata(void);
t_metadata	*get_metadata_ptr(void *vector);

////////////////////////////////////////////////////////////////////////////////

size_t		ft_vector_get_element_size(void *vector);

////////////////////////////////////////////////////////////////////////////////

size_t		get_bytes_after_metadata(t_metadata *metadata_ptr,
				size_t element_size);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
