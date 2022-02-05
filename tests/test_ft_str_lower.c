/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_str_lower.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 14:33:37 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/05 14:56:03 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

Test(ft_str_lower, full_upper)
{
	char	*tested = ft_str_lower(strdup("FOO"));
	cr_assert_str_eq(tested, "foo");
	free(tested);
}

Test(ft_str_lower, full_lower)
{
	char	*tested = ft_str_lower(strdup("foo"));
	cr_assert_str_eq(tested, "foo");
	free(tested);
}

Test(ft_str_lower, not_alpha)
{
	char	*tested = ft_str_lower(strdup("$"));
	cr_assert_str_eq(tested, "$");
	free(tested);
}
