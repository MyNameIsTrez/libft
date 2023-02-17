/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_error_ptr.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/23 14:00:43 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/06 15:06:04 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/error/ft_error.h"

// TODO: Add tests.
t_ft_error	*ft_get_error_ptr(void)
{
	static t_ft_error	ft_error = FT_OK;

	return (&ft_error);
}
