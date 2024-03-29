/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_count_iterator.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/28 14:35:07 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/28 14:35:09 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/iterator/ft_iterator.h"

t_iterator	ft_get_count_iterator(size_t count)
{
	return (ft_get_iterator(0, (intptr_t)count, 1));
}
