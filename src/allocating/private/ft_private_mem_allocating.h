/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_private_mem_allocating.h                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/15 14:30:47 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/15 14:36:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRIVATE_MEM_ALLOCATING_H
# define FT_PRIVATE_MEM_ALLOCATING_H

# include <stddef.h>

typedef struct s_single_malloc
{
	void	*ptr;
	size_t	count;
	size_t	size;
	size_t	capacity;
}	t_single_malloc;

typedef struct s_malloced
{
	t_single_malloc	*malloc_ptrs;
	size_t			size;
	size_t			capacity;
}	t_malloced;

void		*_calloc(size_t count, size_t size);
t_malloced	*get_malloced(void);

#endif
