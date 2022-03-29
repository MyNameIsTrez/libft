/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 16:02:31 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

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
	size_t	first_index;
	size_t	offset;

	if (needle[0] == '\0')
		return ((char *)haystack);
	first_index = 0;
	offset = 0;
	while (first_index + offset < len AND haystack[first_index + offset] != '\0')
	{
		if (haystack[first_index + offset] == needle[offset])
		{
			offset++;
			if (needle[offset] == '\0')
				return (&((char *)haystack)[first_index]);
		}
		else
		{
			first_index++;
			offset = 0;
		}
	}
	return (NULL);
}

////////////////////////////////////////////////////////////////////////////////
