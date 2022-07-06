/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_error.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:15:18 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/06 14:03:46 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef LIBFT_ERROR_H
# define LIBFT_ERROR_H

////////////////////////////////////////////////////////////////////////////////

typedef enum e_status
{
	OK,
	ERROR,
}	t_status;

typedef enum e_ft_error
{
	FT_OK,
	FT_ERROR_INVALID_FD,
	FT_ERROR_MALLOC,
	FT_ERROR_NON_RECTANGULAR_GRID,
	FT_ERROR_TOO_FEW_ARGS,
	FT_ERROR_TOO_MANY_ARGS,
}	t_ft_error;

// typedef enum e_sl_error
// {
// 	SL_OK,
// 	SL_ERROR_FILE_HAS_INVALID_CHAR,
// 	SL_ERROR_INVALID_SCALE,
// 	SL_ERROR_MLX42,
// 	SL_ERROR_TOO_MANY_PLAYERS,
// }	t_sl_error;

////////////////////////////////////////////////////////////////////////////////

t_ft_error	*ft_get_error_ptr(void);
t_ft_error	ft_get_error(void);
t_status	ft_set_error(t_ft_error ft_error);
t_status	ft_any_error(void);

// t_sl_error	*sl_get_error_ptr(void);
// t_sl_error	sl_get_error(void);
// t_status	sl_set_error(t_sl_error sl_error);
// t_status	sl_any_error(void);

// t_status	sl_set_error(t_sl_error sl_error)
// {
// 	*sl_get_error_ptr() = sl_error;
// 	return (ERROR);
// }

// t_status	sl_any_error(void)
// {
// 	if (ft_any_error() != OK)
// 		return (ERROR);
// 	if (sl_get_error() != SL_OK)
// 		return (ERROR);
// 	return (OK);
// }

// void	sl_print_error(void)
// {
// 	char*const	error_messages[] = {
// 		"",
// 		"The input map has an invalid character.",
// 		"The scale argument that was provided to the program is invalid.",
// 		"MLX42 reported something went wrong.",
// 		"There are too many player characters in the input map.",
// 	};

// 	ft_print("Error: ");
// 	ft_print(error_messages[sl_get_error()]);
// }

// void	sl_print_all_errors(void)
// {
// 	if (ft_get_error() != FT_OK)
// 		ft_print_error();
// 	if (sl_get_error() != SL_OK)
// 		sl_print_error();
// }

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
