/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:04 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/16 17:42:18 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	unsigned char	*str1_;
	unsigned char	*str2_;
	size_t			i;

	if (len == 0)
		return (0);
	str1_ = (unsigned char *)str1;
	str2_ = (unsigned char *)str2;
	i = 0;
	while (i < len - 1 && str1_[i] - str2_[i] == 0 && str1_[i] != '\0')
		i++;
	return (str1_[i] - str2_[i]);
}
