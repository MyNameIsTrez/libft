/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_mem.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:26:21 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/23 14:09:50 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_H
# define FT_MEM_H

# include "src/helper_headers/ft_types.h"

# include <stdbool.h>
# include <stddef.h>
# include <sys/types.h>

void	ft_bzero(void *ptr, size_t size);
bool	ft_mem_equal(const void *src1, const void *src2, size_t len);
void	*ft_memchr(const void *ptr, t_i32 chr, size_t len);
t_i32	ft_memcmp(const void *src1, const void *src2, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset_struct(void *dst, void *struct_, size_t struct_size,
			size_t dst_length);
void	*ft_memset(void *dst, t_i32 chr, size_t len);
ssize_t	ft_write(int fildes, const void *buf, size_t nbyte);

#endif
