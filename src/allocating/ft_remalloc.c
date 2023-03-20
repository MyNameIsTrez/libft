/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_remalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 15:22:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 15:37:31 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/ft_allocating.h"
#include "src/allocating/private/ft_private_mem_allocating.h"
#include "src/mem/ft_mem.h"

/**
 * @brief It copies old_count elements pointed to by @p ptrptr
 * to the new pointer.
 * If @p ptrptr is NULL, nothing will be allocated and NULL will be returned.
 * Remallocing will always be done by malloc(), so it guarantees that
 * the memory is zero-filled.
 * @p ptrptr won't be changed to the reallocated address.
 *
 * @param ptrptr The address of a pointer to remalloc.
 * @param new_count The new count of the returned pointer.
 * @return The malloced pointer. NULL if @p ptrptr is NULL, or
 * @p new_count is zero.
 */
void	*ft_remalloc(void *ptrptr, size_t new_count)
{
	void		**_ptrptr;
	void		*ptr;
	ssize_t		index;
	t_malloced	*malloced;
	void		*new_ptr;

	_ptrptr = ptrptr;
	if (_ptrptr == NULL)
		return (NULL);
	ptr = *_ptrptr;
	index = find_malloc_ptr_index(ptr);
	if (index == -1)
		return (NULL);
	malloced = get_malloced();
	if (malloced == NULL)
		return (NULL);
	new_ptr = ft_malloc(new_count, malloced->malloc_ptrs[index].size,
			malloced->malloc_ptrs[index].description);
	if (new_ptr == NULL)
		return (NULL);
	ft_memcpy(new_ptr, ptr, malloced->malloc_ptrs[index].count
		* malloced->malloc_ptrs[index].size);
	ft_free(_ptrptr);
	return (new_ptr);
}
