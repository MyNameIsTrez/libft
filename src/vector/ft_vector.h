/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 09:57:23 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 15:50:21 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

////////////////////////////////////////////////////////////////////////////////

# include "libft.h"

////////////////////////////////////////////////////////////////////////////////

# define VECTOR_DEFAULT_ELEMENT_CAPACITY 1

////////////////////////////////////////////////////////////////////////////////

void		*ft_vector_back(void *vector);
void		ft_vector_clean_up(void);
void		*ft_vector_copy(void *vector);
void		ft_vector_free(void *vector_ptr);
size_t		ft_vector_get_capacity(void *vector);
size_t		ft_vector_get_element_size(void *vector);
size_t		ft_vector_get_size(void *vector);
void		*ft_vector_new_reserved(size_t element_size,
				size_t initial_capacity);
void		*ft_vector_new(size_t element_size);
void		ft_vector_pop_back(void *vector_ptr);
t_status	ft_vector_push_new_vector(void *vector_ptr,
				size_t inner_element_size);
t_status	ft_vector_push(void *vector_ptr, void *value_ptr);
t_status	ft_vector_reserve(void *vector_ptr, size_t new_count);
void		ft_vector_swap_remove(void *vector_ptr, size_t index);
// void	ft_vector_remove(void *vector_ptr, size_t index)

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
