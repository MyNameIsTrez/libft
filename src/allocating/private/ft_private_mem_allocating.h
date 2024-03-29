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
# include <sys/types.h>

typedef struct s_single_malloc
{
	void	*ptr;
	size_t	count;
	size_t	size;
	size_t	capacity;
	char	*description;
}	t_single_malloc;

typedef struct s_malloced
{
	t_single_malloc	*malloc_ptrs;
	size_t			size;
	size_t			capacity;
}	t_malloced;

void		*_calloc(size_t count, size_t size);
ssize_t		find_malloc_ptr_index(void *ptr);
t_malloced	*get_malloced(void);

#endif
