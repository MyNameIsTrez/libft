/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_defines.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:15:39 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/25 15:54:55 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEFINES_H
# define FT_DEFINES_H

# include <sys/select.h>

# define WHITESPACE " \t\n\v\f\r"
# define DIGITS "0123456789"
# define HEX_BASE_CHARACTERS "0123456789abcdef"

# ifndef OPEN_FD_MAX
#  define OPEN_FD_MAX FD_SETSIZE
# endif

#endif
