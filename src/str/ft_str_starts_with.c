/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_starts_with.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/25 19:28:34 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 14:46:19 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/nbr/ft_nbr.h"
#include "src/str/ft_str.h"

/**
 * @brief Returns whether @p str1 starts with @p str2.
 *
 * @param str1
 * @param str2
 * @return true if @p str1 starts with @p str2; false otherwise.
 */
bool	ft_str_starts_with(const char *str1, const char *str2)
{
	size_t	str1_len;
	size_t	str2_len;

	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	return (ft_strncmp(str1, str2,
			ft_min_size(ft_strlen(str1), ft_strlen(str2))) == 0);
}
