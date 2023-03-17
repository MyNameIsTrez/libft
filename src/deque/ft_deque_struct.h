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

#ifndef FT_DEQUE_STRUCT_H
# define FT_DEQUE_STRUCT_H

# include <stddef.h>

/**
 * @brief These fields are all internal.
 *
 * @param data The content of the deque.
 * @param _start_index Used for calculating end_index.
 * @param _size Tracks the number of elements.
 * @param _capacity Tracks the number of elements that fit.
 * @param _element_size Tracks the size of an element.
 */
typedef struct s_deque
{
	void	*data;
	size_t	start_index;
	size_t	size;
	size_t	capacity;
	size_t	element_size;
	char	*description;
}	t_deque;

#endif
