/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_success.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:15:18 by sbos          #+#    #+#                 */
/*   Updated: 2022/06/23 15:21:57 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef LIBFT_SUCCESS_H
# define LIBFT_SUCCESS_H

////////////////////////////////////////////////////////////////////////////////

typedef enum e_success
{
	SUCCESS,
	ERROR,

	// TODO: How to have norm correct comments here?
	// libft
	ERROR_INVALID_FD,
	ERROR_MALLOC,
	ERROR_NONRECTANGULAR_GRID,

	// so_long
	ERROR_WRONG_ARG_COUNT,
	ERROR_TOO_FEW_ARGS,
	ERROR_TOO_MANY_ARGS,
	ERROR_FILE_HAS_INVALID_CHAR,
}	t_success;

////////////////////////////////////////////////////////////////////////////////

t_success	*ft_get_error_ptr(void);
t_success	ft_get_error(void);
t_success	ft_set_error(t_success error_arg);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
