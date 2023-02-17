/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:21:15 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/25 15:31:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef FT_PRINT_H
# define FT_PRINT_H

////////////////////////////////////////////////////////////////////////////////

# include "src/helper_headers/ft_types.h"

# include <sys/types.h>

////////////////////////////////////////////////////////////////////////////////

ssize_t	ft_print_fd(char *str, t_i32 fd);
ssize_t	ft_print(char *str);
ssize_t	ft_put_substr_fd(char *start_substr, char *end_substr, t_i32 fd);
ssize_t	ft_put_substr(char *start_substr, char *end_substr);
ssize_t	ft_putchar_fd(char chr, t_i32 fd);
ssize_t	ft_putchar(char chr);
ssize_t	ft_putendl_fd(char *str, t_i32 fd);
ssize_t	ft_putendl(char *str);
ssize_t	ft_putnbr_fd(t_i32 nbr, t_i32 fd);
ssize_t	ft_putnbr(t_i32 nbr);
ssize_t	ft_putstr_fd(char *str, t_i32 fd);
ssize_t	ft_putstr(char *str);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
