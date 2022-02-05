/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_is_upper.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 14:12:24 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/05 14:30:53 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

Test(ft_is_upper, basic)
{
	cr_assert_int_eq(ft_is_upper('A'), 1);
	cr_assert_int_eq(ft_is_upper('A'), 1);

	cr_assert_int_eq(ft_is_upper('a'), 0);
	cr_assert_int_eq(ft_is_upper('z'), 0);
	cr_assert_int_eq(ft_is_upper('#'), 0);
}
