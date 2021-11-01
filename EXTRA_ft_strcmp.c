/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   EXTRA_ft_strcmp.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:04 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/14 10:20:47 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_max(const int a, const int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	ft_strcmp(const char *str1, const char *str2)
{
	return (ft_strncmp(str1, str2, ft_max(ft_strlen(str1), ft_strlen(str2))));
}
