/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_min.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 14:33:17 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/10 16:26:01 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks whether @p a is smaller than @p b.
 *
 * @param a
 * @param b
 * @return The smallest number.
 */
int	ft_min(const int a, const int b)
{
	if (a < b)
		return (a);
	return (b);
}
