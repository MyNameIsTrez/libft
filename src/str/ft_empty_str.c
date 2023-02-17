/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_empty_str.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/25 20:14:03 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/25 20:16:56 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/str/ft_str.h"

/**
 * @brief Returns an empty string.
 *
 * @return
 */
char	*ft_empty_str(void)
{
	return (ft_strdup(""));
}
