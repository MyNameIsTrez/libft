/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 16:46:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include <stddef.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Locates a substring in a string.\n
   Not more than @p len characters are searched.
 *
 * @param haystack
 * @param needle
 * @param len
 * @return If @p needle is an empty string, @p haystack is returned;\n
   If @p needle occurs nowhere in @p haystack, NULL is returned;\n
   Otherwise, a pointer to the first character
   of the first occurrence of @p needle is returned.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hay_index;
	size_t	offset;

	if (needle[0] == '\0')
		return ((char *)haystack);
	hay_index = 0;
	offset = 0;
	while (hay_index + offset < len && haystack[hay_index + offset] != '\0')
	{
		if (haystack[hay_index + offset] == needle[offset])
		{
			offset++;
			if (needle[offset] == '\0')
				return (&((char *)haystack)[hay_index]);
		}
		else
		{
			hay_index++;
			offset = 0;
		}
	}
	return (NULL);
}

////////////////////////////////////////////////////////////////////////////////
