/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_vector.h                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 09:57:23 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/20 12:37:47 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef LIBFT_VEC_H
# define LIBFT_VEC_H

////////////////////////////////////////////////////////////////////////////////

# include "libft.h"

////////////////////////////////////////////////////////////////////////////////

# define VECTOR_DEFAULT_ELEMENT_CAPACITY 1

////////////////////////////////////////////////////////////////////////////////

void	*vector_new(size_t element_size);
void	*vector_new_reserved(size_t element_size, size_t initial_capacity);
void	vector_reserve(void *vector, size_t additional_elements);
void	vector_push(void *vector, void *value_ptr);
void	vector_free(void *vector);
void	vector_clean_up(void);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
