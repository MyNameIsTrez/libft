/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   EXTRA_ft_strtrim_whitespace.c                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/14 16:00:04 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 16:34:54 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim_whitespace(const char *str)
{
	return (ft_strtrim(str, " \t\n\v\f\r"));
}
