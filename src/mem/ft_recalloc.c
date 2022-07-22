/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 15:22:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/22 20:47:32 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Unlike realloc(),
 * this function will always call ft_calloc(@p new_count, @p type_size).
 * If it is successfull, it will free the original @p ptr and return the calloc.
 * It copies @p old_count elements pointed to by @p ptr to the new pointer.
 * If @p ptr is NULL, ft_recalloc() is identical to a call to calloc().
 * Recallocing will always be done by calloc(), so it guarantees that
 * the memory is zero-filled.
 *
 * @param ptr The pointer to recalloc.
 * @param old_count The old count of @p ptr.
 * @param new_count The new count of the returned pointer.
 * @param type_size The type size of @p ptr and the returned pointer.
 * @return The calloced pointer. NULL if @p new_count or @p type_size are zero.
 */
void	*ft_recalloc(void *ptr, size_t old_count, size_t new_count,
			size_t type_size)
{
	void	*new_ptr;

	new_ptr = ft_calloc(new_count, type_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		ft_memcpy(new_ptr, ptr, old_count * type_size);
		ft_free(&ptr);
	}
	return (new_ptr);
}

////////////////////////////////////////////////////////////////////////////////
