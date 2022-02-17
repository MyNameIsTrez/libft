/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_memchr.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 15:47:56 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/16 16:10:10 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

#include <unistd.h>
#include <fcntl.h>

////////////////////////////////////////////////////////////////////////////////

Test(ft_memchr)
{
	char	*str = "abbc";

	ASSERT((char *)ft_memchr(str, 'b', 5), "bbc");
}

////////////////////////////////////////////////////////////////////////////////