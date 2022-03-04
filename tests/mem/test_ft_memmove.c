/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_memmove.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 16:20:21 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/04 14:17:49 by sbos          ########   odam.nl         */
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
		massert(dst, "");
		free(dst);
	}

	{
		char	src[] = "foobarbaz";
		char	*dst;

		dst = malloc(10);
		ft_bzero(dst, 10);
		ft_memmove(dst, src, 5);
		massert(dst, "fooba");
		free(dst);
	}

	{
		char	src[] = "foobarbaz";
		char	*dst;

		dst = malloc(10);
		ft_bzero(dst, 10);
		ft_memmove(dst, src, 9);
		massert(dst, "foobarbaz");
		free(dst);
	}

	{
		char	src[] = "foobarba";
		char	*dst;

		dst = malloc(10);
		ft_bzero(dst, 10);
		ft_memmove(dst, src, 9);
		massert(dst, "foobarba");
		free(dst);
	}
}

////////////////////////////////////////////////////////////////////////////////
