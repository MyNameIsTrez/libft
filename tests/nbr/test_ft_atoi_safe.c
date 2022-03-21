/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_atoi_safe.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 14:30:21 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/21 15:09:55 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_atoi_safe)
{
	{
		{
			int	nbr = 420;
			massert(ft_atoi_safe("-12345", &nbr), (bool)true);
			massert(nbr, -12345);
		}

		{
			int	nbr = 420;
			massert(ft_atoi_safe("+12345", &nbr), (bool)true);
			massert(nbr, 12345);
		}

		{
			int	nbr = 420;
			massert(ft_atoi_safe(".12345", &nbr), (bool)false);
			massert(nbr, 420);
		}

		{
			int	nbr = 420;
			massert(ft_atoi_safe("a12345", &nbr), (bool)false);
			massert(nbr, 420);
		}

		{
			int	nbr = 420;
			massert(ft_atoi_safe(" 12345 ", &nbr), (bool)true);
			massert(nbr, 12345);
		}
	}

	{
		{
			int	nbr = 420;
			massert(ft_atoi_safe("- 12345", &nbr), (bool)false);
			massert(nbr, 420);
		}

		{
			int	nbr = 420;
			massert(ft_atoi_safe("+ 12345", &nbr), (bool)false);
			massert(nbr, 420);
		}

		{
			int	nbr = 420;
			massert(ft_atoi_safe(". 12345", &nbr), (bool)false);
			massert(nbr, 420);
		}

		{
			int	nbr = 420;
			massert(ft_atoi_safe("a 12345", &nbr), (bool)false);
			massert(nbr, 420);
		}
	}

	{
		{
			int	nbr = 420;
			massert(ft_atoi_safe("123-45", &nbr), (bool)true);
			massert(nbr, 123);
		}

		{
			int	nbr = 420;
			massert(ft_atoi_safe("123+45", &nbr), (bool)true);
			massert(nbr, 123);
		}

		{
			int	nbr = 420;
			massert(ft_atoi_safe("123.45", &nbr), (bool)true);
			massert(nbr, 123);
		}

		{
			int	nbr = 420;
			massert(ft_atoi_safe("123a45", &nbr), (bool)true);
			massert(nbr, 123);
		}
	}

	{
		{
			int	nbr = 420;
			massert(ft_atoi_safe("12345-", &nbr), (bool)true);
			massert(nbr, 12345);
		}

		{
			int	nbr = 420;
			massert(ft_atoi_safe("12345+", &nbr), (bool)true);
			massert(nbr, 12345);
		}

		{
			int	nbr = 420;
			massert(ft_atoi_safe("12345.", &nbr), (bool)true);
			massert(nbr, 12345);
		}

		{
			int	nbr = 420;
			massert(ft_atoi_safe("12345a", &nbr), (bool)true);
			massert(nbr, 12345);
		}
	}
}

////////////////////////////////////////////////////////////////////////////////
