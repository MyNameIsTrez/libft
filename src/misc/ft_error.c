/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_error.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/04 17:15:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 14:49:23 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Returns true when @p status is not SUCCESS.
 *
 * @param status
 * @return
 */
bool	ft_error(intmax_t status)
{
	return (status != SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////
