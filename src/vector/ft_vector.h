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

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

# include "src/deque/ft_deque.h"
# include "src/error/ft_error.h"

# define VECTOR_DEFAULT_ELEMENT_CAPACITY 1

typedef void*	t_vector_;
typedef void*	t_vector_ptr;

void		*ft_vector_back(t_vector_ vector);
void		ft_vector_clean_up(void);
t_vector_	ft_vector_copy(t_vector_ vector);
void		ft_vector_free(t_vector_ptr vector_ptr);
t_vector_	ft_vector_from_deque(t_deque *deque);
size_t		ft_vector_get_capacity(t_vector_ vector);
size_t		ft_vector_get_element_size(t_vector_ vector);
size_t		ft_vector_get_size(t_vector_ vector);
t_vector_	ft_vector_new_reserved(size_t element_size, size_t initial_capacity,
				char *description);
t_vector_	ft_vector_new(size_t element_size, char *description);
void		ft_vector_pop_back(t_vector_ptr vector_ptr);
t_status	ft_vector_push_new_vector(t_vector_ptr vector_ptr,
				size_t inner_element_size, char *description);
t_status	ft_vector_push(t_vector_ptr vector_ptr, void *value_ptr);
t_status	ft_vector_reserve(t_vector_ptr vector_ptr, size_t new_count);
void		ft_vector_swap_remove(t_vector_ptr vector_ptr, size_t index);
// void	ft_vector_remove(t_vector_ptr vector_ptr, size_t index)

#endif
