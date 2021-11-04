/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:44 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/04 14:13:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Compares memory areas, and at most @p len bytes.
 *
 * @param src1
 * @param src2
 * @param len
 * @return 0 if the two strings are identical;\n
   Otherwise, the difference between the first two differing bytes
   (treated as unsigned char values,
   so that `\200' is greater than `\0', for example).\n
   This behavior is not required by C and portable code should only depend
   on the sign of the returned value.
 */
int	ft_memcmp(const void *src1, const void *src2, size_t len)
{
	unsigned char	*src1_;
	unsigned char	*src2_;
	size_t			i;
	int				diff;

	src1_ = (unsigned char *)src1;
	src2_ = (unsigned char *)src2;
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
