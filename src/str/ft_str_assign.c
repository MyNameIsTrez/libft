/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_assign.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/04 14:00:46 by sbos          #+#    #+#                 */
/*   Updated: 2022/06/29 12:43:00 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/error/ft_error.h"

#include <stddef.h>

t_status	ft_str_assign(char **dst, char *src)
{
	if (src == NULL)
		return (ERROR);
	*dst = src;
	return (OK);
}
