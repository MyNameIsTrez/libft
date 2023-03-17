/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin_array.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/29 16:02:04 by sbos          #+#    #+#                 */
/*   Updated: 2022/11/29 16:02:04 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/str/ft_str.h"

char	*ft_strjoin_array(char *array[], char *description)
{
	char	*result;

	if (!array[0])
		return (NULL);
	if (!array[1])
		return (ft_strdup(array[0], description));
	result = ft_strjoin(array[0], array[1], description);
	if (!result)
		return (NULL);
	array += 2;
	while (*array != NULL)
	{
		result = ft_strjoin_and_free_left(result, *array, description);
		if (!result)
			return (NULL);
		array++;
	}
	return (result);
}
