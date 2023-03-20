/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 15:22:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 16:00:47 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/ft_allocating.h"
#include "src/allocating/private/ft_private_mem_allocating.h"
#include "src/mem/ft_mem.h"

/**
 * @brief It copies old_count elements pointed to by @p ptrptr
 * to the new pointer.
 * If @p ptrptr is NULL, nothing will be allocated and NULL will be returned.
 * Recallocing will always be done by calloc(), so it guarantees that
 * the memory is zero-filled.
 * @p ptrptr won't be changed to the reallocated address.
 *
 * @param ptrptr The address of a pointer to recalloc.
 * @param new_count The new count of the returned pointer.
 * @return The calloced pointer. NULL if @p ptrptr is NULL, or
 * @p new_count is zero.
 */
void	*ft_recalloc(void *ptrptr, size_t new_count)
{
	void			**_ptrptr;
	void			*ptr;
	t_single_malloc	*malloc_ptr;
	void			*new_ptr;

	_ptrptr = ptrptr;
	if (_ptrptr == NULL)
		return (NULL);
	ptr = *_ptrptr;
	malloc_ptr = ft_find_malloc_ptr(ptr);
	if (malloc_ptr == NULL)
		return (NULL);
	new_ptr = ft_calloc(new_count, malloc_ptr->size, malloc_ptr->description);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		ft_memcpy(new_ptr, ptr, malloc_ptr->count * malloc_ptr->size);
		ft_free(_ptrptr);
	}
	return (new_ptr);
}
