/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_metadata_ptr.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 12:58:08 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 13:16:41 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

t_metadata	*get_metadata_ptr(void *vector)
{
	t_metadata	*vector_of_metadata;
	size_t		index;

	vector_of_metadata = get_vector_of_metadata();
	if (vector_of_metadata == NULL)
		return (NULL);
	index = 0;
	while (index < vector_of_metadata[0].size)
	{
		if (vector_of_metadata[index].address == vector)
			return (&vector_of_metadata[index]);
		index++;
	}
	ft_set_error(FT_ERROR_VECTOR_NOT_FOUND);
	return (NULL);
}

////////////////////////////////////////////////////////////////////////////////
