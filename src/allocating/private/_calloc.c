/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   _calloc.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/15 14:32:04 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/15 14:32:21 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/mem/ft_mem.h"

#include <stdlib.h>

void	*_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
