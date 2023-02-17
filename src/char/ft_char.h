/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_char.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:17:31 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/25 15:30:32 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef FT_CHAR_H
# define FT_CHAR_H

# include "src/helper_headers/ft_types.h"

# include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////

# define LOWER_UPPER_DIFFERENCE ('a' - 'A')

////////////////////////////////////////////////////////////////////////////////

t_i32	ft_char_to_digit(const char chr);
char	*ft_char_to_str(const char chr);
bool	ft_is_lower(char chr);
bool	ft_is_upper(char chr);
t_i32	ft_isalnum(t_i32 chr);
t_i32	ft_isalpha(t_i32 chr);
t_i32	ft_isascii(t_i32 chr);
t_i32	ft_isdigit(t_i32 chr);
t_i32	ft_isprint(t_i32 chr);
bool	ft_isspace(const t_i32 chr);
t_i32	ft_tolower(t_i32 chr);
t_i32	ft_toupper(t_i32 chr);

#endif

////////////////////////////////////////////////////////////////////////////////
