/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_malloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 10:57:52 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/25 11:46:36 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "malloced.h"

////////////////////////////////////////////////////////////////////////////////

#ifdef CTESTER
# include "ctester_globals.h"
#endif

////////////////////////////////////////////////////////////////////////////////

// TODO: Am I allowed to just call C's calloc() directly instead?
STATIC void	*_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

STATIC void	*_recalloc(void *ptr, size_t old_count, size_t new_count,
				size_t type_size)
{
	void	*new_ptr;

	new_ptr = _calloc(new_count, type_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		ft_memcpy(new_ptr, ptr, old_count * type_size);
		free(ptr);
	}
	return (new_ptr);
}

STATIC void	*register_malloc(size_t count, size_t size)
{
	t_malloced	*malloced;
	void		*malloc_ptr;
	size_t		old_capacity;
	size_t		new_capacity;
	void		*temp;

	if (count == 0 || size == 0)
		return (NULL);
	malloced = get_malloced();
	if (malloced == NULL)
		return (NULL);
	malloc_ptr = malloc(count * size);
	if (malloc_ptr == NULL)
		return (NULL);
	if (malloced->size >= malloced->capacity)
	{
		old_capacity = malloced->capacity;
		new_capacity = old_capacity * 2;
		temp = _recalloc(malloced->malloc_ptrs, old_capacity, new_capacity, \
				sizeof(void *));
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

t_malloced	*get_malloced(void)
{
	static t_malloced	malloced = {\
		.malloc_ptrs = NULL, .size = 0, .capacity = 0};

	if (malloced.malloc_ptrs == NULL)
	{
		malloced.malloc_ptrs = _calloc(1, sizeof(void *));
		if (malloced.malloc_ptrs == NULL)
			return (NULL);
		malloced.capacity = 1;
	}
	return (&malloced);
}

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Used so my tester can check whether programs still work
 * when malloc() fails.
 *
 * @param size FT_ERROR_MALLOC is set if this is 0
 * @return Allocated bytes. When CTESTER is defined, NULL can be returned
 */
#ifdef CTESTER

void	*ft_malloc(size_t count, size_t size)
{
	void	*ptr;

	malloc_call_count++;
	if (malloc_call_count != malloc_call_count_to_fail)
	{
		ptr = register_malloc(count, size);
		if (ptr == NULL)
			ft_set_error(FT_ERROR_MALLOC);
		return (ptr);
	}
	was_malloc_unstable = true;
	ft_set_error(FT_ERROR_MALLOC);
	return (NULL);
}

#else

void	*ft_malloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = register_malloc(count, size);
	if (ptr == NULL)
		ft_set_error(FT_ERROR_MALLOC);
	return (ptr);
}

#endif

////////////////////////////////////////////////////////////////////////////////
