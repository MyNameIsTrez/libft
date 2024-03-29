/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_private_deque.h                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/19 16:13:25 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/19 16:13:25 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRIVATE_DEQUE_H
# define FT_PRIVATE_DEQUE_H

# include <stdint.h>

void	*deque_at_wrapping(t_deque *deque, intptr_t index);
size_t	deque_get_wrapped_index(t_deque *deque, intptr_t index);

#endif
