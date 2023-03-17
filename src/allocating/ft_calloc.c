/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:16 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/22 20:49:23 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/ft_allocating.h"
#include "src/mem/ft_mem.h"

// TODO: Add check for if count * size overflows, like the real calloc.
/**
 * @brief Allocates @p count * @p size cleared bytes.
 *
 * @param count
 * @param size FT_ERROR_MALLOC is set if this is 0
 * @param description
 * @return Allocated bytes
 */
void	*ft_calloc(size_t count, size_t size, char *description)
{
	void	*ptr;

	ptr = ft_malloc(count, size, description);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
