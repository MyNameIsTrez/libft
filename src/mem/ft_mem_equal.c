/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_mem_equal.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/23 14:08:09 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/23 14:09:38 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/mem/ft_mem.h"

#include <stdbool.h>
#include <stddef.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Returns whether two memory areas are equal, and at most @p len bytes.
 *
 * @param src1
 * @param src2
 * @param len
 * @return
 */
bool	ft_mem_equal(const void *src1, const void *src2, size_t len)
{
	return (ft_memcmp(src1, src2, len) == 0);
}

////////////////////////////////////////////////////////////////////////////////
