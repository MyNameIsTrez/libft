/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   try_init_vector_of_metadata_ptr.c                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 13:33:40 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 16:19:23 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/allocating/ft_allocating.h"
#include "src/vector/private/ft_private_vector.h"
#include "src/mem/ft_mem.h"

#include <stddef.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Doesn't re-init if this function was called before.
 *
 * @return
 */
t_status	try_init_vector_of_metadata_ptr(void)
{
	t_metadata	**vector_of_metadata_ptr;

	vector_of_metadata_ptr = get_vector_of_metadata_ptr();
	if (*vector_of_metadata_ptr == NULL)
	{
		*vector_of_metadata_ptr = ft_malloc(1, sizeof(t_metadata));
		if (*vector_of_metadata_ptr == NULL)
			return (ERROR);
		(*vector_of_metadata_ptr)[0].size = 1;
		(*vector_of_metadata_ptr)[0].capacity = 1;
		(*vector_of_metadata_ptr)[0].element_size = sizeof(t_metadata);
		(*vector_of_metadata_ptr)[0].address = *vector_of_metadata_ptr;
	}
	return (OK);
}

////////////////////////////////////////////////////////////////////////////////
