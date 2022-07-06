/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_error.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 13:20:27 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/06 13:56:14 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

void	ft_print_error(void)
{
	char*const	error_messages[] = {
		"",
		"Invalid file descriptor.",
		"Malloc failure.",
		"The input map is not rectangular.",
		"Too few program arguments were provided.",
		"Too many program arguments were provided.",
	};

	ft_print("Error: ");
	ft_print(error_messages[ft_get_error()]);
}

////////////////////////////////////////////////////////////////////////////////
