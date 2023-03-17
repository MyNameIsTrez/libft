/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_allocating.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/15 14:23:53 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/15 15:21:06 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALLOCATING_H
# define FT_ALLOCATING_H

# include <stddef.h>

void	*ft_calloc(size_t count, size_t size, char *description);
void	ft_free_allocations(void);
void	ft_free(void *ptr);
size_t	ft_get_allocation_count(void);
size_t	ft_get_bytes_allocated(void);
void	*ft_malloc(size_t count, size_t size, char *description);
void	ft_print_allocations(void);
void	*ft_recalloc(void *ptrptr, size_t old_count, size_t new_count,
			size_t type_size, char *description);
void	*ft_remalloc(void *ptrptr, size_t old_count, size_t new_count,
			size_t type_size, char *description);

#endif
