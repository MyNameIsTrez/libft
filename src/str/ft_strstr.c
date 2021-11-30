/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   EXTRA_ft_strstr.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:02 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/08 16:00:30 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Locates a substring.
 *
 * @param haystack
 * @param needle
 * @return A pointer to the beginning of the located substring;\n
   NULL if the substring is not found;\n
   @p haystack if @p needle is an empty string.
 */
char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t			haystack_offset;
	size_t			offset;

	if (needle[0] == '\0')
		return ((char *)haystack);
	haystack_offset = 0;
	offset = 0;
	while (haystack[haystack_offset + offset] != '\0')
	{
		if (haystack[haystack_offset + offset] == needle[offset])
		{
			offset++;
			if (needle[offset] == '\0')
				return (&((char *)haystack)[haystack_offset]);
		}
		else
		{
			haystack_offset++;
			offset = 0;
		}
	}
	return (NULL);
}
