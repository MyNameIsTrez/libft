/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_strnstr.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 17:35:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/22 17:41:03 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"
#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

#ifndef linux
Test(ft_strnstr)
{
	massert(ft_strnstr("bar", "ba", 3), strnstr("bar", "ba", 3));
	massert(ft_strnstr("bar", "a", 3), strnstr("bar", "a", 3));
	// printf("%s\n", ft_strnstr("bar", "ba", 3));
	// printf("%s\n", ft_strnstr("bar", "ba", 1));
	massert(ft_strnstr("bar", "ba", 4), strnstr("bar", "ba", 4));
	massert(ft_strnstr("bar", "a", 4), strnstr("bar", "a", 4));
	massert(ft_strnstr("bar", "ba", 2), strnstr("bar", "ba", 2));
	massert(ft_strnstr("bar", "a", 2), strnstr("bar", "a", 2));
	massert((void *)ft_strnstr("bar", "ba", 1), NULL);
	// printf("'%s'\n", ft_strnstr("foobar", "bar", 6));
	// printf("'%s'\n", strnstr("foobar", "bar", 6));
	// printf("'%s'\n", ft_strnstr("foobar", "", 6));
	// printf("'%s'\n", ft_strnstr("foobar", "b", 6));
	// printf("'%s'\n", strnstr("foobar", "b", 6));
	// printf("'%s'\n", ft_strnstr("foobar", "ob", 6));
	// printf("'%s'\n", ft_strnstr("foobar", "baro", 6));
	// printf("'%s'\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	// printf("'%s'\n", strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));

	// The ft_strnstr correctly crashes just like the original strnstr here.
	// const char	haystack[] = { 'l', 'o', 'r', 'e', 'm', 'i', 'p', 's', 'u', 'm' };
	// printf("'%s'\n", ft_strnstr(haystack, "ipsumm", 30));
	// printf("'%s'\n", strnstr(haystack, "ipsumm", 30));
}
#endif

////////////////////////////////////////////////////////////////////////////////
