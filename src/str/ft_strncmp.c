/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:04 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 15:04:08 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Compares two strings, and at most @p len bytes.
 *
 * @param str1
 * @param str2
 * @param len
 * @return 0 if @p str1 and @p str2 are equal;\n
   a negative value if @p str1 is less than @p str2;\n
   a positive value if @p str1 is greater than @p str2.
 */
t_i32	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	t_u8	*str1_;
	t_u8	*str2_;
	size_t	i;

	if (len == 0)
		return (0);
	str1_ = (t_u8 *)str1;
	str2_ = (t_u8 *)str2;
	i = 0;
	while (i < len - 1 AND str1_[i] - str2_[i] == 0 AND str1_[i] != '\0')
		i++;
	return (str1_[i] - str2_[i]);
}

////////////////////////////////////////////////////////////////////////////////
