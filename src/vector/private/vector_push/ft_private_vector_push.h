/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_private_vector_push.h                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/26 16:21:14 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 17:18:54 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRIVATE_VECTOR_PUSH_H
# define FT_PRIVATE_VECTOR_PUSH_H

# include "src/helper_headers/ft_types.h"

void		add_vector_value(t_metadata *metadata_ptr, t_u8 *vector,
				void *value_ptr);

#endif
