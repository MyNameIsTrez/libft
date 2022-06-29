/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_set_error.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/23 13:50:42 by sbos          #+#    #+#                 */
/*   Updated: 2022/06/29 12:43:00 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

t_status	ft_set_error(t_status error_arg)
{
	*ft_get_error_ptr() = error_arg;
	return (error_arg);
}

////////////////////////////////////////////////////////////////////////////////
