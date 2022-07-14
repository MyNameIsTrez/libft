/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:04 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/14 10:20:47 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Compares two strings.
 *
 * @param str1
 * @param str2
 * @return 0 if @p str1 and @p str2 are equal;\n
   a negative value if @p str1 is less than @p str2;\n
   a positive value if @p str1 is greater than @p str2.
 */
t_i32	ft_strcmp(const char *str1, const char *str2)
{
	return (ft_strncmp(str1, str2,
			(size_t)ft_max((t_i32)ft_strlen(str1), (t_i32)ft_strlen(str2))));
}

////////////////////////////////////////////////////////////////////////////////
