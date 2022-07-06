/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_error.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 13:20:27 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/06 15:30:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

// TODO: Add tests.
void	ft_print_error(void)
{
	char*const	ft_error_messages[] = {
	[FT_ERROR_INVALID_FD] = "Invalid file descriptor.",
	[FT_ERROR_MALLOC] = "Malloc failure.",
	[FT_ERROR_NON_RECTANGULAR_GRID] = "The input map is not rectangular.",
	[FT_ERROR_TOO_FEW_ARGS] = "Too few program arguments were provided.",
	[FT_ERROR_TOO_MANY_ARGS] = "Too many program arguments were provided.",
	};

	ft_print("Error: ");
	ft_putendl(ft_error_messages[ft_get_error()]);
}

////////////////////////////////////////////////////////////////////////////////
