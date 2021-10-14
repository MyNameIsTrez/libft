/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:02 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/14 13:21:04 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	first_index;
	size_t	offset;

	if (needle[0] == '\0')
		return ((char *)haystack);
	first_index = 0;
	offset = 0;
	while (first_index + offset < len && haystack[first_index + offset] != '\0')
	{
		if (haystack[first_index + offset] == needle[offset])
		{
			offset++;
			if (needle[offset] == '\0')
				return ((char *)haystack + first_index);
		}
		else
		{
			first_index++;
			offset = 0;
		}
	}
	return (NULL);
}
