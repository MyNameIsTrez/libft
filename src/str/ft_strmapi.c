/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:06 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 15:04:04 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/str/ft_str.h"

/**
 * @brief Applies the function @p fun to each character
   of the string @p input_str,
   passing the character's index and value to @p fun.\n
   A new string is created from the successive application of @p fun.
 *
 * @param input_str The string on which to iterate.
 * @param fun The function to apply to each character.
 * @return The string created from the successive application of @p fun;\n
   NULL if the allocation fails, or if either @p input_str or
   @p fun are NULL.
 */
char	*ft_strmapi(const char *input_str, char (*fun)(t_u32, char))
{
	char	*output_str;
	t_u32	i;

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
