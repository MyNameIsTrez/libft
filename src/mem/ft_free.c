/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/21 13:27:37 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 16:42:02 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief Frees a pointer and sets it to NULL.
 *
 * @param ptr transformed to a void **
 * @return NULL
 */
void	*ft_free(void *ptr)
{
	void	**ptrptr;

	ptrptr = &ptr;
	free(*ptrptr);
	*ptrptr = NULL;
	return (NULL);
}
