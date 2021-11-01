/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:06 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 16:56:33 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_stralloc(const size_t len)
{
	return (ft_calloc(len + 1, sizeof(char)));
}

char	*ft_strmapi(const char *input_str, char (*fun)(unsigned int, char))
{
	char	*output_str;
	size_t	i;

	output_str = ft_stralloc(ft_strlen(input_str));
	if (output_str == NULL)
		return (NULL);
	i = 0;
	while (input_str[i] != '\0')
	{
		output_str[i] = fun(i, input_str[i]);
		i++;
	}
	return (output_str);
}
