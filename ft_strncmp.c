/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:04 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/04 13:52:40 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Compares two strings, and at most @p len bytes.
 *
 * @param str1
 * @param str2
 * @param len
 * @return 0, if the @p str1 and @p str2 are equal;\n
           a negative value if @p str1 is less than @p str2;\n
           a positive value if @p str1 is greater than @p str2.
 */
int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	unsigned char	*str1_;
	unsigned char	*str2_;
	size_t			i;
	int				diff;

	str1_ = (unsigned char *)str1;
	str2_ = (unsigned char *)str2;
	i = 0;
	while (i < len)
	{
		diff = str1_[i] - str2_[i];
		if (diff != 0)
			return (diff);
		else if (str1_[i] == '\0' && str2_[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
