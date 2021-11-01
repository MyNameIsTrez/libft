/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 14:24:17 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 14:34:46 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int chr)
{
	return (0 <= chr && chr <= 127);
}
