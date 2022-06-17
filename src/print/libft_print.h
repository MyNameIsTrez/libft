/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_print.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:21:15 by sbos          #+#    #+#                 */
/*   Updated: 2022/06/17 16:44:30 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef LIBFT_PRINT_H
# define LIBFT_PRINT_H

////////////////////////////////////////////////////////////////////////////////

ssize_t	ft_print_fd(char *str, int fd);
ssize_t	ft_print(char *str);
ssize_t	ft_put_substr_fd(char *start_substr, char *end_substr, int fd);
ssize_t	ft_put_substr(char *start_substr, char *end_substr);
ssize_t	ft_putchar_fd(char chr, int fd);
ssize_t	ft_putchar(char chr);
ssize_t	ft_putendl_fd(char *str, int fd);
ssize_t	ft_putendl(char *str);
ssize_t	ft_putnbr_fd(int nbr, int fd);
ssize_t	ft_putnbr(int nbr);
ssize_t	ft_putstr_fd(char *str, int fd);
ssize_t	ft_putstr(char *str);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
