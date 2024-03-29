/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_private_vector_metadata_getters.h               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 13:55:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 14:04:49 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRIVATE_VECTOR_METADATA_GETTERS_H
# define FT_PRIVATE_VECTOR_METADATA_GETTERS_H

# include "src/vector/private/ft_private_vector_metadata_struct.h"

t_metadata	**get_vector_of_metadata_ptr(void);
t_metadata	*get_vector_of_metadata(void);
t_metadata	*get_metadata_ptr(void *vector);

#endif
