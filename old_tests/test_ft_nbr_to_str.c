/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_nbr_to_str.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 16:21:21 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/05 16:28:59 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

Test(ft_nbr_to_str, decimal)
{
	{
		char	*str = ft_nbr_to_str(0, 10);
		cr_assert_str_eq(str, "0");
		free(str);
	}
	{
		char	*str = ft_nbr_to_str(9, 10);
		cr_assert_str_eq(str, "9");
		free(str);
	}
	{
		char	*str = ft_nbr_to_str(10, 10);
		cr_assert_str_eq(str, "10");
		free(str);
	}
	{
		char	*str = ft_nbr_to_str(-9, 10);
		cr_assert_str_eq(str, "-9");
		free(str);
	}
	{
		char	*str = ft_nbr_to_str(-10, 10);
		cr_assert_str_eq(str, "-10");
		free(str);
	}
}

Test(ft_nbr_to_str, hex)
{
	{
		char	*str = ft_nbr_to_str(0, 16);
		cr_assert_str_eq(str, "0");
		free(str);
	}
	{
		char	*str = ft_nbr_to_str(15, 16);
		cr_assert_str_eq(str, "f");
		free(str);
	}
	{
		char	*str = ft_nbr_to_str(16, 16);
		cr_assert_str_eq(str, "10");
		free(str);
	}
	{
		char	*str = ft_nbr_to_str(-15, 16);
		cr_assert_str_eq(str, "-f");
		free(str);
	}
	{
		char	*str = ft_nbr_to_str(-16, 16);
		cr_assert_str_eq(str, "-10");
		free(str);
	}
}
