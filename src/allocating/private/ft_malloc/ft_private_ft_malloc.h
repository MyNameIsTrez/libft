/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_private_ft_malloc.h                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/15 14:33:47 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/15 14:36:33 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRIVATE_FT_MALLOC_H
# define FT_PRIVATE_FT_MALLOC_H

# include <stddef.h>

void	*_recalloc(void *ptr, size_t old_count, size_t new_count,
			size_t type_size);
void	*register_malloc(size_t count, size_t size, char *description);

#endif
