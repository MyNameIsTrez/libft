/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_malloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 10:57:52 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/15 14:37:32 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/private/ft_malloc/ft_private_ft_malloc.h"
#include "src/error/ft_error.h"

#include <stddef.h>

#ifdef CTESTER
# include "ctester_globals.h"
#endif

/**
 * @brief Used so my tester can check whether programs still work
 * when malloc() fails.
 *
 * @param size FT_ERROR_MALLOC is set if this is 0
 * @return Allocated bytes. When CTESTER is defined, NULL can be returned
 */
#ifdef CTESTER

void	*ft_malloc(size_t count, size_t size, char *description)
{
	void	*ptr;

	malloc_call_count++;
	if (malloc_call_count != malloc_call_count_to_fail)
	{
		ptr = register_malloc(count, size, description);
		if (ptr == NULL)
			ft_set_error(FT_ERROR_MALLOC);
		return (ptr);
	}
	was_malloc_unstable = true;
	ft_set_error(FT_ERROR_MALLOC);
	return (NULL);
}

#else

void	*ft_malloc(size_t count, size_t size, char *description)
{
	void	*ptr;

	ptr = register_malloc(count, size, description);
	if (ptr == NULL)
		ft_set_error(FT_ERROR_MALLOC);
	return (ptr);
}

#endif
