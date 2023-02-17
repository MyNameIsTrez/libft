/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_eq.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/25 19:28:34 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 14:46:19 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/str/ft_str.h"

/**
 * @brief Checks if two strings are equal.
 *
 * @param str1
 * @param str2
 * @return true if @p str1 and @p str2 are equal;\n
   false otherwise.
 */
bool	ft_str_eq(const char *str1, const char *str2)
{
	return (ft_strcmp(str1, str2) == 0);
}
