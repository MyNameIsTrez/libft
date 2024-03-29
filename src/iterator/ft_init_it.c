/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_init_it.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/05 22:06:52 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/05 22:07:39 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/iterator/ft_iterator.h"
#include "src/mem/ft_mem.h"

void	ft_init_it(t_iterator *it)
{
	ft_bzero(it, sizeof(t_iterator));
}
