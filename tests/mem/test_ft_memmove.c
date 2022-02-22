/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_memmove.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 16:20:21 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 12:45:17 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_memmove)
{
	{
		char	src[] = "foobarbaz";
		char	*dst;

		dst = malloc(10);
		ft_bzero(dst, 10);
		ft_memmove(dst, src, 0);
		ASSERT(dst, "");
	}

	{
		char	src[] = "foobarbaz";
		char	*dst;

		dst = malloc(10);
		ft_bzero(dst, 10);
		ft_memmove(dst, src, 5);
		ASSERT(dst, "fooba");
	}

	{
		char	src[] = "foobarbaz";
		char	*dst;

		dst = malloc(10);
		ft_bzero(dst, 10);
		ft_memmove(dst, src, 9);
		ASSERT(dst, "foobarbaz");
	}

	{
		char	src[] = "foobarba";
		char	*dst;

		dst = malloc(10);
		ft_bzero(dst, 10);
		ft_memmove(dst, src, 9);
		ASSERT(dst, "foobarba");
	}
}

////////////////////////////////////////////////////////////////////////////////
