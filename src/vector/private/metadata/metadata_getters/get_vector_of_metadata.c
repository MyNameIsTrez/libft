/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_vector_of_metadata.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 12:58:19 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 16:19:06 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/vector/private/ft_private_vector.h"
#include "src/vector/private/metadata/metadata_getters/\
ft_private_vector_metadata_getters.h"

t_metadata	*get_vector_of_metadata(void)
{
	return (*get_vector_of_metadata_ptr());
}
