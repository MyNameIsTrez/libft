/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_vector_of_metadata.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 12:58:19 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 13:16:38 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

t_metadata	*get_vector_of_metadata(void)
{
	t_metadata	**vector_of_metadata_ptr;

	vector_of_metadata_ptr = get_vector_of_metadata_ptr();
	if (vector_of_metadata_ptr == NULL)
		return (NULL);
	return (*vector_of_metadata_ptr);
}

////////////////////////////////////////////////////////////////////////////////
