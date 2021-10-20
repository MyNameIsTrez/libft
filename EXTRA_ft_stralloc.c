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

#include <stdlib.h>

char	*ft_stralloc(size_t n)
{
	char	*str;

	str = malloc(n + 1);
	str[n] = '\0';
	return (str);
}
