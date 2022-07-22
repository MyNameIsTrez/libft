/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_remalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 15:22:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/22 13:39:24 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Unlike realloc(),
 * this function will always call ft_malloc(@p new_size).
 * If it is successfull, it will free the original @p ptr and return the malloc.
 * It copies @p old_size bytes pointed to by @p ptr to the new pointer.
 * If @p ptr is NULL, ft_remalloc() is identical to a call to malloc()
 * for @p new_size bytes.
 * Remallocing will always be done by malloc(), so it does not guarantee that
 * the memory is zero-filled. Use ft_recalloc() instead if this is required.
 *
 * @param ptr The pointer to remalloc
 * @param old_size The original size of @p ptr
 * @param new_size The size of the returned pointer
 * @return The malloced pointer. NULL if @p new_size is zero.
 */
void	*ft_remalloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*new_ptr;

	new_ptr = ft_malloc(new_size);
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
