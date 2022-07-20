/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_vector.h                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 09:57:23 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/20 16:13:01 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef LIBFT_VECTOR_H
# define LIBFT_VECTOR_H

////////////////////////////////////////////////////////////////////////////////

# include "libft.h"

////////////////////////////////////////////////////////////////////////////////

# define VECTOR_DEFAULT_ELEMENT_CAPACITY 1

////////////////////////////////////////////////////////////////////////////////

void		*vector_new(size_t element_size);
void		*vector_new_reserved(size_t element_size, size_t initial_capacity);
t_status	vector_reserve(void *vector, size_t additional_elements);
t_status	vector_push(void *vector, void *value_ptr);
t_status	vector_free(void *vector);
t_status	vector_clean_up(void);
t_status	vector_push_new_vector(void *vector_ptr, size_t inner_element_size);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
