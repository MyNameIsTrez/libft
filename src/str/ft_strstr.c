/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:02 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/08 16:00:30 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

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
	size_t	hay_index;
	size_t	offset;

	if (needle[0] == '\0')
		return ((char *)haystack);
	hay_index = 0;
	offset = 0;
	while (haystack[hay_index + offset] != '\0')
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
