/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_strlcat.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 17:12:00 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_strlcat)
{
	{
		char	ft_dst[] = "rrrrrr\0\0\0\0\0a\0\0";
		char	dst[] = "rrrrrr\0\0\0\0\0a\0\0";

		size_t ft_cat = ft_strlcat(ft_dst, "lorem", 15);
		size_t cat = strlcat(dst, "lorem", 15);
		massert(ft_cat, cat);
		massert(ft_dst, dst);
	}

	{
		char	ft_dst[] = "rrrrrr\0\0\0\0\0a\0\0";
		char	dst[] = "rrrrrr\0\0\0\0\0a\0\0";

		size_t ft_cat = ft_strlcat(ft_dst, "lorem ipsum dolor sit amet", 15);
		size_t cat = strlcat(dst, "lorem ipsum dolor sit amet", 15);
		massert(ft_cat, cat);
		massert(ft_dst, dst);
	}

	{
		char	ft_dst[] = "rrrrrr\0\0\0\0\0a\0\0";
		char	dst[] = "rrrrrr\0\0\0\0\0a\0\0";

		size_t ft_cat = ft_strlcat(ft_dst, "lorem ipsum dolor sit amet", 0);
		size_t cat = strlcat(dst, "lorem ipsum dolor sit amet", 0);
		massert(ft_cat, cat);
		massert(ft_dst, dst);
	}
}

////////////////////////////////////////////////////////////////////////////////