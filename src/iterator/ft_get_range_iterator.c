/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_range_iterator.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/29 13:13:12 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/29 13:13:30 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/iterator/ft_iterator.h"

t_iterator	ft_get_range_iterator(t_i32 start, t_i32 stop)
{
	return (ft_get_step_range_iterator(start, stop, 1));
}
