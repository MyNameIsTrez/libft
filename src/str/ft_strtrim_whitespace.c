/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim_whitespace.c                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 16:00:04 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 17:31:05 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/helper_headers/ft_defines.h"
#include "src/str/ft_str.h"

/**
 * @brief Trims whitespace.
 *
 * @param str
 * @return The trimmed string.
 */
char	*ft_strtrim_whitespace(const char *str, char *description)
{
	return (ft_strtrim(str, WHITESPACE, description));
}
