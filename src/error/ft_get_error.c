/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_error.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/23 13:54:22 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/06 15:06:06 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/error/ft_error.h"

// TODO: Add tests.
t_ft_error	ft_get_error(void)
{
	return (*ft_get_error_ptr());
}
