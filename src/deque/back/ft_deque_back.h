/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_deque_back.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 17:55:20 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 17:55:20 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEQUE_BACK_H
# define FT_DEQUE_BACK_H

# include "src/error/ft_error.h"

typedef struct s_deque	t_deque;

void		*ft_deque_back(t_deque *deque);
void		ft_deque_pop_back(t_deque *deque);
t_status	ft_deque_push_back(t_deque *deque, void *value_ptr);

#endif
