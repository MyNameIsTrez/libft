/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_private_register_malloc.h                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/26 15:54:36 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 15:58:03 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRIVATE_REGISTER_MALLOC_H
# define FT_PRIVATE_REGISTER_MALLOC_H

# include <stdbool.h>

bool	grow_malloc_ptrs(t_malloced *malloced);

#endif
