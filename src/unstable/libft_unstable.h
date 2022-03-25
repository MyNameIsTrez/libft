/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_unstable.h                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 16:17:18 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 18:40:51 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef LIBFT_UNSTABLE_H
# define LIBFT_UNSTABLE_H

////////////////////////////////////////////////////////////////////////////////

# include <stddef.h>	// size_t
# include <sys/types.h>	// ssize_t

////////////////////////////////////////////////////////////////////////////////

extern int malloc_call_count;
extern int malloc_call_count_fail_point;
extern int was_malloc_unstable;

extern int write_call_count;
extern int write_call_count_fail_point;
extern int was_write_unstable;

////////////////////////////////////////////////////////////////////////////////

void	*ft_unstable_malloc(size_t size);
ssize_t	ft_unstable_write(int fildes, const void *buf, size_t nbyte);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
