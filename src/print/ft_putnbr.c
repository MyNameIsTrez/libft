/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:31 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:47:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/helper_headers/ft_types.h"
#include "src/print/ft_print.h"

#include <sys/types.h>
#include <unistd.h>

/**
 * @brief Writes an t_i32 to the standard output.
 *
 * @param nbr The integer to output.
 */
ssize_t	ft_putnbr(t_i32 nbr)
{
	return (ft_putnbr_fd(nbr, STDOUT_FILENO));
}
