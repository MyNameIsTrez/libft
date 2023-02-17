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

////////////////////////////////////////////////////////////////////////////////

#include "src/allocating/ft_allocating.h"
#include "src/mem/ft_mem.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Unlike realloc(),
 * this function will always call ft_calloc(@p new_count, @p type_size).
 * If it is successfull, it will free the original @p ptrptr
 * and return the calloc.
 * It copies @p old_count elements pointed to by @p ptrptr to the new pointer.
 * If @p ptrptr is NULL, nothing will be allocated and NULL will be returned.
 * Recallocing will always be done by calloc(), so it guarantees that
 * the memory is zero-filled.
 * Just like the standard realloc(), @p ptrptr won't be changed
 * to the reallocated address.
 *
 * @param ptrptr The address of a pointer to recalloc.
 * @param old_count The old count of @p ptrptr.
 * @param new_count The new count of the returned pointer.
 * @param type_size The type size of @p ptrptr and the returned pointer.
 * @return The calloced pointer. NULL if @p ptrptr is NULL, @p new_count is zero
 * or @p type_size is zero.
 */
void	*ft_recalloc(void *ptrptr, size_t old_count, size_t new_count,
			size_t type_size)
{
	void	*new_ptr;
	void	**_ptrptr;

	_ptrptr = ptrptr;
	if (_ptrptr == NULL)
		return (NULL);
	new_ptr = ft_calloc(new_count, type_size);
	if (new_ptr == NULL)
		return (NULL);
	if (*_ptrptr != NULL)
	{
		ft_memcpy(new_ptr, *_ptrptr, old_count * type_size);
		ft_free(_ptrptr);
	}
	return (new_ptr);
}

////////////////////////////////////////////////////////////////////////////////
