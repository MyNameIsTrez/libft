/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector_getters.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 13:55:09 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 12:58:29 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

// TODO: It is annoying how this function is also responsible for the allocation
// Try splitting this up into subfunctions and rewriting code which uses this.
// Note that it is also being indirectly used all over the place.
t_metadata	**get_vector_of_metadata_ptr(void)
{
	static t_metadata	*vector_of_metadata = NULL;

	if (vector_of_metadata == NULL)
	{
		vector_of_metadata = ft_malloc(1, sizeof(t_metadata));
		if (vector_of_metadata == NULL)
			return (NULL);
		vector_of_metadata[0].size = 1;
		vector_of_metadata[0].capacity = 1;
		vector_of_metadata[0].element_size = sizeof(t_metadata);
		vector_of_metadata[0].address = vector_of_metadata;
	}
	return (&vector_of_metadata);
}

////////////////////////////////////////////////////////////////////////////////
