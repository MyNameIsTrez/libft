/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_set_error.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/23 13:50:42 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/06 15:06:10 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/error/ft_error.h"

// TODO: Add tests.
t_status	ft_set_error(t_ft_error ft_error)
{
	*ft_get_error_ptr() = ft_error;
	return (ERROR);
}
