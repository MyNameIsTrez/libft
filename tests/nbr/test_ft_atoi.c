/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_atoi.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 14:30:21 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/21 13:16:54 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_atoi)
{
	{
		massert(ft_atoi("-12345"), -12345);
		massert(ft_atoi("-12345"), atoi("-12345"));

		massert(ft_atoi("+12345"), 12345);
		massert(ft_atoi("+12345"), atoi("+12345"));

		massert(ft_atoi(".12345"), 0);
		massert(ft_atoi(".12345"), atoi(".12345"));

		massert(ft_atoi("a12345"), 0);
		massert(ft_atoi("a12345"), atoi("a12345"));

		massert(ft_atoi(" 12345 "), 12345);
		massert(ft_atoi(" 12345 "), atoi(" 12345 "));
	}

	{
		massert(ft_atoi("- 12345"), 0);
		massert(ft_atoi("- 12345"), atoi("- 12345"));

		massert(ft_atoi("+ 12345"), 0);
		massert(ft_atoi("+ 12345"), atoi("+ 12345"));

		massert(ft_atoi(". 12345"), 0);
		massert(ft_atoi(". 12345"), atoi(". 12345"));

		massert(ft_atoi("a 12345"), 0);
		massert(ft_atoi("a 12345"), atoi(". 12345"));
	}

	{
		massert(ft_atoi("123-45"), 123);
		massert(ft_atoi("123-45"), atoi("123-45"));

		massert(ft_atoi("123+45"), 123);
		massert(ft_atoi("123+45"), atoi("123+45"));

		massert(ft_atoi("123.45"), 123);
		massert(ft_atoi("123.45"), atoi("123.45"));

		massert(ft_atoi("123a45"), 123);
		massert(ft_atoi("123a45"), atoi("123a45"));
	}

	{
		massert(ft_atoi("12345-"), 12345);
		massert(ft_atoi("12345-"), atoi("12345-"));

		massert(ft_atoi("12345+"), 12345);
		massert(ft_atoi("12345+"), atoi("12345+"));

		massert(ft_atoi("12345."), 12345);
		massert(ft_atoi("12345."), atoi("12345."));

		massert(ft_atoi("12345a"), 12345);
		massert(ft_atoi("12345a"), atoi("12345a"));
	}
}

////////////////////////////////////////////////////////////////////////////////
