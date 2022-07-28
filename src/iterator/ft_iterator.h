/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterator.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 11:34:01 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/28 14:35:18 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef FT_ITERATOR_H
# define FT_ITERATOR_H

////////////////////////////////////////////////////////////////////////////////

# include "utils/ft_iterator_utils.h"

////////////////////////////////////////////////////////////////////////////////

# include "range/ft_iterator_range_getters.h"

////////////////////////////////////////////////////////////////////////////////

t_iterator			ft_get_array_iterator(void *start, size_t count,
						size_t size);
t_iterator			ft_get_count_iterator(size_t count);
t_iterator			ft_get_iterator(intptr_t start, intptr_t stop,
						intptr_t step);
t_iterator_status	ft_iterate(t_iterator *it);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
