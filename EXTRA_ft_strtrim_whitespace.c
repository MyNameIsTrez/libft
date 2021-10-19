/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   EXTRA_ft_strtrim_whitespace.c                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 16:00:04 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/18 16:13:35 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim_whitespace(char const *string)
{
	return (ft_strtrim(string, " \t\n\v\f\r"));
}
