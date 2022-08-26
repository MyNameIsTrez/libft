/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:44 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/26 17:14:32 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Compares memory areas, and at most @p len bytes.
 *
 * @param src1
 * @param src2
 * @param len
 * @return 0 if the two strings are identical;
   Otherwise, the difference between the first two differing bytes
   (treated as t_u8 values,
   so that `\200` is greater than `\0`, for example).
   This behavior is not required by C and portable code should only depend
   on the sign of the returned value.
 */
t_i32	ft_memcmp(const void *src1, const void *src2, size_t len)
{
	t_u8	*src1_;
	t_u8	*src2_;
	size_t	i;
	t_i32	diff;

	src1_ = (t_u8 *)src1;
	src2_ = (t_u8 *)src2;
	i = 0;
	while (i < len)
	{
		diff = src1_[i] - src2_[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (0);
}

////////////////////////////////////////////////////////////////////////////////
