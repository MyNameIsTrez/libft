/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_malloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 10:57:52 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/21 13:27:48 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

typedef struct s_malloced
{
	void	**malloc_ptrs;
	size_t	size;
	size_t	capacity;
}	t_malloced;

////////////////////////////////////////////////////////////////////////////////

STATIC void	*_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*new_ptr;

	if (new_size == 0 && ptr != NULL)
		new_size = 1;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr != NULL)
		ft_memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}

STATIC t_malloced	*get_malloced(void)
{
	static t_malloced	malloced = {\
		.malloc_ptrs = NULL, .size = 0, .capacity = 1};

	if (malloced.malloc_ptrs == NULL)
	{
		malloced.malloc_ptrs = malloc(sizeof(void *));
		if (malloced.malloc_ptrs == NULL)
			return (NULL);
	}
	return (&malloced);
}

STATIC void	*register_malloc(size_t size)
{
	t_malloced	*malloced;
	void		*malloc_ptr;
	size_t		old_capacity;
	size_t		new_capacity;
	void		*temp;

	malloced = get_malloced();
	if (malloced == NULL)
		return (NULL);
	malloc_ptr = malloc(size);
	if (malloc_ptr == NULL)
		return (NULL);
	if (malloced->size >= malloced->capacity)
	{
		old_capacity = sizeof(void *) * malloced->capacity;
		new_capacity = old_capacity * 2;
		temp = _realloc(malloced->malloc_ptrs, old_capacity, new_capacity);
		if (temp == NULL)
			return (NULL);
		malloced->malloc_ptrs = temp;
		malloced->capacity *= 2;
	}
	malloced->malloc_ptrs[malloced->size] = malloc_ptr;
	malloced->size++;
	return (malloc_ptr);
}

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Used so my tester can check whether programs still work
 * when malloc() fails.
 *
 * @param size
 * @return NULL if this call was set to fail
 */
#ifdef DEBUG
# include "ctester_globals.h"

void	*ft_malloc(size_t size)
{
	malloc_call_count++;
	if (malloc_call_count != malloc_call_count_to_fail)
		return (register_malloc(size));
	was_malloc_unstable = true;
	return (NULL);
}
#else

void	*ft_malloc(size_t size)
{
	return (register_malloc(size));
}
#endif

////////////////////////////////////////////////////////////////////////////////
