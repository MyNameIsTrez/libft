/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterator.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 11:34:01 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/05 22:07:53 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef FT_ITERATOR_H
# define FT_ITERATOR_H

////////////////////////////////////////////////////////////////////////////////

# include "private/ft_iterator_utils.h"

////////////////////////////////////////////////////////////////////////////////

t_iterator			ft_get_array_iterator(void *start, size_t count,
						size_t size);
t_iterator			ft_get_count_iterator(size_t count);
t_iterator			ft_get_iterator(intptr_t start, intptr_t stop,
						intptr_t step);
t_iterator			ft_get_range_iterator(t_i32 start, t_i32 stop);
t_iterator			ft_get_step_range_iterator(t_i32 start, t_i32 stop,
						t_i32 step);
t_iterator			ft_get_vector_iterator(void *vector);

////////////////////////////////////////////////////////////////////////////////

void				ft_init_it(t_iterator *it);

////////////////////////////////////////////////////////////////////////////////

t_iterator_status	ft_iterate(t_iterator *it);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
