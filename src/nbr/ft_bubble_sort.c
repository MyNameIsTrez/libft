/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bubble_sort.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 16:37:27 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 16:51:50 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/helper_headers/ft_types.h"

#include <stddef.h>

/**
 * @brief Sorts a @p len @p array of t_i32.
 *
 * @param array
 * @param len
 */
void	ft_bubble_sort(t_i32 *array, size_t len)
{
	t_i32	end_index;
	t_i32	window_index;
	t_i32	temp;

	if (len == 0)
		return ;
	end_index = (t_i32)len - 2;
	while (end_index >= 0)
	{
		window_index = 0;
		while (window_index <= end_index)
		{
			if (array[window_index] > array[window_index + 1])
			{
				temp = array[window_index];
				array[window_index] = array[window_index + 1];
				array[window_index + 1] = temp;
			}
			window_index++;
		}
		end_index--;
	}
}
