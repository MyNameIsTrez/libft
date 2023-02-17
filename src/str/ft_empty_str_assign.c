/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_empty_str_assign.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/04 14:09:25 by sbos          #+#    #+#                 */
/*   Updated: 2022/04/05 15:12:56 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/str/ft_str.h"

t_status	ft_empty_str_assign(char **dst)
{
	return (ft_str_assign(dst, ft_empty_str()));
}
