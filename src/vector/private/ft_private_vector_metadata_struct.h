/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_private_vector_metadata_struct.h                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 14:02:33 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 15:59:01 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef FT_PRIVATE_VECTOR_METADATA_STRUCT_H
# define FT_PRIVATE_VECTOR_METADATA_STRUCT_H

////////////////////////////////////////////////////////////////////////////////

# include <stddef.h>

/**
 * @param size In elements
 * @param capacity In elements
 */
typedef struct s_metadata
{
	size_t	size;
	size_t	capacity;
	size_t	element_size;
	void	*address;
}	t_metadata;

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
