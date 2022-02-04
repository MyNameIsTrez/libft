/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_max.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 14:34:05 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/10 16:26:06 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks whether @p a is bigger than @p b.
 *
 * @param a
 * @param b
 * @return The biggest number.
 */
int	ft_max(const int a, const int b)
{
	if (a > b)
		return (a);
	return (b);
}
