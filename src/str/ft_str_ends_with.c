/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_ends_with.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/25 19:28:34 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 14:46:19 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Returns whether @p str1 ends with @p str2.
 *
 * @param str1
 * @param str2
 * @return true if @p str1 ends with @p str2; false otherwise.
 */
bool	ft_str_ends_with(const char *str1, const char *str2)
{
	size_t	str1_len;
	size_t	str2_len;

	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	return (str1_len >= str2_len
		&& ft_str_eq(str1 + str1_len - str2_len, str2));
}

////////////////////////////////////////////////////////////////////////////////
