/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 15:22:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/22 13:39:22 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Unlike realloc(),
 * this function will always call ft_calloc(@p new_size).
 * If it is successfull, it will free the original @p ptr and return the calloc.
 * It copies @p old_size bytes pointed to by @p ptr to the new pointer.
 * If @p ptr is NULL, ft_recalloc() is identical to a call to calloc()
 * for @p new_size bytes.
 * Recallocing will always be done by calloc(), so it guarantees that
 * the memory is zero-filled.
 * This function does not check for count * size overflow like ft_calloc() does.
 *
 * @param ptr The pointer to recalloc
 * @param old_size The original size of @p ptr
 * @param new_size The size of the returned pointer
 * @return The calloced pointer. NULL if @p new_size is zero.
 */
void	*ft_recalloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*new_ptr;

	new_ptr = ft_calloc(1, new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		ft_memcpy(new_ptr, ptr, old_size);
		ft_free(&ptr);
	}
	return (new_ptr);
}

////////////////////////////////////////////////////////////////////////////////
