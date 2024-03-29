/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:24:17 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 14:46:48 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/mem/ft_mem.h"

#include <stddef.h>

/**
 * @brief Sets @p size bytes to 0.
 *
 * @param ptr
 * @param size
 * @return
 */
void	ft_bzero(void *ptr, size_t size)
{
	ft_memset(ptr, 0, size);
}
