/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_allocation_count.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/15 14:39:11 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/15 14:40:09 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/private/ft_private_mem_allocating.h"

size_t	ft_get_allocation_count(void)
{
	return (get_malloced()->size);
}
