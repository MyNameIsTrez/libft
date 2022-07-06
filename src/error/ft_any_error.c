/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_any_error.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 13:45:03 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/06 15:05:48 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

// TODO: Add tests.
t_status	ft_any_error(void)
{
	if (ft_get_error() != FT_OK)
		return (ERROR);
	return (OK);
}

////////////////////////////////////////////////////////////////////////////////
