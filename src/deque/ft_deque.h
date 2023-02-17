/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_deque.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 09:57:23 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 15:50:21 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEQUE_H
# define FT_DEQUE_H

# include "src/deque/ft_deque_typedef.h"

# include <stddef.h>

// # define DEQUE_DEFAULT_ELEMENT_CAPACITY 1

void		*ft_deque_at(t_deque *deque, size_t index);
t_deque		*ft_deque_new_reserved(size_t element_size,
				size_t initial_capacity);
size_t		ft_deque_size(t_deque *deque);

#endif
