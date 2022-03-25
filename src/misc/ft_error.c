/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_error.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/04 17:15:49 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/22 16:16:38 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "success.h"

////////////////////////////////////////////////////////////////////////////////

#include <stdbool.h>	// bool
#include <stdint.h>		// intmax_t

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