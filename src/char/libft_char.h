/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_char.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:17:31 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/25 17:20:46 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CHAR_H
# define LIBFT_CHAR_H

int		ft_char_to_digit(const char chr);
char	*ft_char_to_str(const char chr);
int		ft_isalnum(int chr);
int		ft_isalpha(int chr);
int		ft_isascii(int chr);
int		ft_isdigit(int chr);
int		ft_isprint(int chr);
int		ft_isspace(const int chr);
int		ft_tolower(int chr);
int		ft_toupper(int chr);

#endif
