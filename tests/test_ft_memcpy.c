/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_memcpy.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:38:12 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/11 14:13:51 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	test_ft_memcpy(void)
{
	const void	*dst;
	void		*src;
	size_t		n;

	n = 2;
	printf("Testing ft_memcpy...\n");
	printf(ft_memcpy(dst, src, n));
}
