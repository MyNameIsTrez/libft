/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_is_lower.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 14:12:26 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/05 14:30:47 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

Test(ft_is_lower, basic)
{
	cr_assert_int_eq(ft_is_lower('a'), 1);
	cr_assert_int_eq(ft_is_lower('z'), 1);

	cr_assert_int_eq(ft_is_lower('A'), 0);
	cr_assert_int_eq(ft_is_lower('Z'), 0);
	cr_assert_int_eq(ft_is_lower('#'), 0);
}
