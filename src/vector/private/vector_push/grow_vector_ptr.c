/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   grow_vector_ptr.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/26 16:21:46 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 17:00:28 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "../ft_private_vector_metadata_struct.h"
#include "../ft_private_vector.h"

////////////////////////////////////////////////////////////////////////////////

t_status	grow_vector_ptr(void *vector_ptr, t_metadata *metadata_ptr)
{
	if (metadata_ptr->capacity == 0)
	{
		if (ft_vector_reserve(vector_ptr, 1) != OK)
			return (ERROR);
	}
	else if (ft_vector_reserve(vector_ptr, 2 * metadata_ptr->capacity) != OK)
		return (ERROR);
	return (OK);
}

////////////////////////////////////////////////////////////////////////////////
