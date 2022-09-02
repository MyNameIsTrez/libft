/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_deque_struct.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 14:58:26 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 14:58:26 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef FT_DEQUE_STRUCT_H
# define FT_DEQUE_STRUCT_H

////////////////////////////////////////////////////////////////////////////////

/**
 * @param data The content of the deque.
 * @param _start_index Internal field. Used for calculating end_index.
 * @param _size Internal field. Tracks the number of elements.
 * @param _capacity Internal field. Tracks the number of elements that fit.
 * @param _element_size Internal field. Tracks the size of an element.
 */
typedef struct s_deque
{
	void	*data;
	size_t	_start_index;
	size_t	_size;
	size_t	_capacity;
	size_t	_element_size;
}	t_deque;

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
