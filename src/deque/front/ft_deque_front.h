/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_deque_front.h                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 17:58:33 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 17:58:33 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEQUE_FRONT_H
# define FT_DEQUE_FRONT_H

typedef struct s_deque	t_deque;

void		*ft_deque_front(t_deque *deque);
void		ft_deque_pop_front(t_deque *deque);
t_status	ft_deque_push_front(t_deque *deque, void *value_ptr);

#endif
