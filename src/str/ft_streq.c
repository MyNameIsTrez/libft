/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_streq.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/15 16:46:41 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/15 16:52:05 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if two strings are equal.
 *
 * @param str1
 * @param str2
 * @return true if @p str1 and @p str2 are equal;\n
   false otherwise.
 */
bool	ft_streq(const char *str1, const char *str2)
{
	return (ft_strcmp(str1, str2) == 0);
}
