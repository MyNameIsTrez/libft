/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_bookkeeping_vector.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:07:51 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 16:18:26 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/vector/private/ft_private_vector.h"

bool	is_bookkeeping_vector(t_metadata *metadata_ptr)
{
	return (metadata_ptr == metadata_ptr->address);
}
