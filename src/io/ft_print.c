/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/11 16:29:33 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/25 18:14:43 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <unistd.h>

// TODO: Make this work for any special characters, not just \n
void	ft_print(char *str)
{
	char	*replaced;

	replaced = ft_str_replace(str, "\n", "\\n");
	write(1, replaced, ft_strlen(replaced) + 1);
	free(replaced);
}
