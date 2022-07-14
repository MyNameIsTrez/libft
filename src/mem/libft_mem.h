/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_mem.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:26:21 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:47:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef LIBFT_MEM_H
# define LIBFT_MEM_H

////////////////////////////////////////////////////////////////////////////////

# include "libft.h"

////////////////////////////////////////////////////////////////////////////////

void	ft_bzero(void *ptr, size_t size);
void	*ft_calloc(size_t count, size_t size);
void	ft_free(void *ptr);
void	*ft_memchr(const void *ptr, t_i32 chr, size_t len);
t_i32		ft_memcmp(const void *src1, const void *src2, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *dst, t_i32 chr, size_t len);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
