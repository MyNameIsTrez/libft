/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_step_range_iterator.c                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 11:42:03 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/29 13:13:27 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/iterator/ft_iterator.h"

t_iterator	ft_get_step_range_iterator(t_i32 start, t_i32 stop, t_i32 step)
{
	return (ft_get_iterator(start, stop, step));
}
