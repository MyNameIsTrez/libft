/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_strlcpy.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 17:26:37 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/17 17:35:24 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_strlcpy)
{
	{
		char	ft_dst[] = "rrrrrr\0\0\0\0\0\0\0\0";
		char	dst[] = "rrrrrr\0\0\0\0\0\0\0\0";

		size_t ft_cpy = ft_strlcpy(ft_dst, "lorem ipsum dolor sit amet", 15);
		size_t cpy = strlcpy(dst, "lorem ipsum dolor sit amet", 15);
		ASSERT(ft_cpy, cpy);
		ASSERT(ft_dst, dst);
	}
	{
		char	ft_dst[] = "rrrrrr\0\0\0\0\0\0\0\0";
		char	dst[] = "rrrrrr\0\0\0\0\0\0\0\0";

		size_t ft_cpy = ft_strlcpy(ft_dst, "lorem ipsum dolor sit amet", 0);
		size_t cpy = strlcpy(dst, "lorem ipsum dolor sit amet", 0);
		ASSERT(ft_cpy, cpy);
		ASSERT(ft_dst, dst);
	}
}

////////////////////////////////////////////////////////////////////////////////
