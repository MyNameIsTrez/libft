/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_misc.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:27:42 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/23 14:11:55 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef LIBFT_MISC_H
# define LIBFT_MISC_H

////////////////////////////////////////////////////////////////////////////////

# include <stdbool.h>	// bool
# include <stdint.h>	// intmax_t
# include <stddef.h>	// size_t
# include <sys/types.h>	// ssize_t

////////////////////////////////////////////////////////////////////////////////

bool	ft_error(intmax_t status);
// void	*ft_unstable_malloc(size_t size);
// ssize_t	ft_unstable_write(int fildes, const void *buf, size_t nbyte);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
