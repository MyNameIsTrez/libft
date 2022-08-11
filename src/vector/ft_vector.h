/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 09:57:23 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 13:27:00 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

////////////////////////////////////////////////////////////////////////////////

# include "libft.h"

////////////////////////////////////////////////////////////////////////////////

# include "private/ft_private_vector.h"

////////////////////////////////////////////////////////////////////////////////

# define VECTOR_DEFAULT_ELEMENT_CAPACITY 1

////////////////////////////////////////////////////////////////////////////////

void		*ft_vector_new(size_t element_size);
void		*ft_vector_new_reserved(size_t element_size,
				size_t initial_capacity);
t_status	ft_vector_reserve(void *vector, size_t additional_elements);
t_status	ft_vector_push(void *vector, void *value_ptr);
t_status	ft_vector_free(void *vector);
t_status	ft_vector_clean_up(void);
t_status	ft_vector_push_new_vector(void *vector_ptr,
				size_t inner_element_size);
size_t		ft_vector_get_size(void *vector);
void		*ft_vector_back(void *vector);
void		ft_vector_pop_back(void *vector_ptr);
void		ft_vector_swap_remove(void *vector_ptr, size_t index);
// void	ft_vector_remove(void *vector_ptr, size_t index)
size_t		ft_vector_get_element_size(void *vector);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
