/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:06 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/21 11:21:31 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

static char	*ft_stralloc(size_t n)
{
	return (ft_calloc(n + 1, sizeof(char)));
}

char	*ft_strmapi(char const *input_string, char (*f)(unsigned int, char))
{
	char	*output_string;
	size_t	i;

	if (!input_string)
		return (NULL);
	output_string = ft_stralloc(ft_strlen(input_string));
	if (!output_string)
		return (NULL);
	i = 0;
	while (input_string[i] != '\0')
	{
		output_string[i] = f(i, input_string[i]);
		i++;
	}
	return (output_string);
}
