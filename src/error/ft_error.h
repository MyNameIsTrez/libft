/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_error.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:15:18 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/21 12:08:46 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef FT_ERROR_H
# define FT_ERROR_H

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

////////////////////////////////////////////////////////////////////////////////

t_status	ft_any_error(void);
t_ft_error	*ft_get_error_ptr(void);
t_ft_error	ft_get_error(void);
void		ft_print_error(void);
t_status	ft_set_error(t_ft_error ft_error);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
