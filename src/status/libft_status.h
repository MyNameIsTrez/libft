/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_status.h                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:15:18 by sbos          #+#    #+#                 */
/*   Updated: 2022/06/29 12:31:22 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef LIBFT_STATUS_H
# define LIBFT_STATUS_H

////////////////////////////////////////////////////////////////////////////////

typedef enum e_status
{
	OK,
	ERROR,

	// TODO: How to have norm correct comments here?
	// libft
	ERROR_INVALID_FD,
	ERROR_MALLOC,
	ERROR_NONRECTANGULAR_GRID,

	// so_long
	ERROR_TOO_FEW_ARGS,
	ERROR_TOO_MANY_ARGS,
	ERROR_FILE_HAS_INVALID_CHAR,
	ERROR_INVALID_SCALE,
	ERROR_MLX42,
	ERROR_TOO_MANY_PLAYERS,
}	t_status;

////////////////////////////////////////////////////////////////////////////////

t_status	*ft_get_error_ptr(void);
t_status	ft_get_error(void);
t_status	ft_set_error(t_status error_arg);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
