/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 15:22:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/21 11:33:28 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Unlike realloc(), this function will always call malloc(@p new_size).
 * If it is successfull, it will free the original @p ptr and return the malloc.
 * It copies @p old_size bytes pointed to by @p ptr to the new pointer.
 * If @p ptr is NULL, ft_realloc() is identical to a call to malloc()
 * for @p new_size bytes.
 * If @p new_size is zero and @p ptr is not NULL,
 * a new, minimum sized object is allocated and the original object is freed.
 * Reallocation will always be done by malloc(), so it does not guarantee that
 * the memory is zero-filled.
 *
 * @param ptr The pointer to reallocate
 * @param old_size The original size of @p ptr
 * @param new_size The size of the returned pointer
 * @return The malloced pointer
 */
void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*new_ptr;

	if (new_size == 0 && ptr != NULL)
		new_size = 1;
	new_ptr = ft_malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr != NULL)
		ft_memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}

////////////////////////////////////////////////////////////////////////////////
