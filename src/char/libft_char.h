/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_char.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:17:31 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/16 14:51:58 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef LIBFT_CHAR_H
# define LIBFT_CHAR_H

////////////////////////////////////////////////////////////////////////////////

# include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////

# define LOWER_UPPER_DIFFERENCE ('a' - 'A')

////////////////////////////////////////////////////////////////////////////////

int		ft_char_to_digit(const char chr);
char	*ft_char_to_str(const char chr);
bool	ft_is_lower(char chr);
bool	ft_is_upper(char chr);
int		ft_isalnum(int chr);
int		ft_isalpha(int chr);
int		ft_isascii(int chr);
int		ft_isdigit(int chr);
int		ft_isprint(int chr);
bool	ft_isspace(const int chr);
int		ft_tolower(int chr);
int		ft_toupper(int chr);

#endif

////////////////////////////////////////////////////////////////////////////////
