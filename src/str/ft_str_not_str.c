/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_not_str.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:02 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/08 16:24:27 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Locates the first substring which isn't @p needle.
 *
 * @param haystack
 * @param needle
 * @return A pointer to the beginning of the located substring;\n
   NULL if the substring is not found;\n
   @p haystack if @p needle is an empty string.
 */
char	*ft_str_not_str(const char *haystack, const char *needle)
{
	size_t			offset;

	offset = 0;
	while (haystack[offset] != '\0')
	{
		if (haystack[offset] != needle[offset])
			return (&((char *)haystack)[offset]);
		offset++;
	}
	return (NULL);
}
