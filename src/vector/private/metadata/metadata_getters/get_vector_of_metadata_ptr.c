/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_vector_of_metadata_ptr.c                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 13:55:09 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 16:19:04 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "../../ft_private_vector.h"

////////////////////////////////////////////////////////////////////////////////

// TODO: It is annoying how this function is also responsible for the allocation
// Try splitting this up into subfunctions and rewriting code which uses this.
// Note that it is also being indirectly used all over the place.
t_metadata	**get_vector_of_metadata_ptr(void)
{
	static t_metadata	*vector_of_metadata = NULL;

	return (&vector_of_metadata);
}

////////////////////////////////////////////////////////////////////////////////
