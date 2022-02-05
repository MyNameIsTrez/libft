/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_str_upper.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 14:33:37 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/05 14:57:18 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

Test(ft_str_upper, full_upper)
{
	char	*tested = ft_str_upper(strdup("FOO"));
	cr_assert_str_eq(tested, "FOO");
	free(tested);
}

Test(ft_str_upper, full_lower)
{
	char	*tested = ft_str_upper(strdup("foo"));
	cr_assert_str_eq(tested, "FOO");
	free(tested);
}

Test(ft_str_upper, not_alpha)
{
	char	*tested = ft_str_upper(strdup("$"));
	cr_assert_str_eq(tested, "$");
	free(tested);
}
