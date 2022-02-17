/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_is_lower.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 14:12:26 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/16 14:37:36 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_is_lower)
{
	ASSERT(ft_is_lower('a'), (bool)true);
	ASSERT(ft_is_lower('z'), (bool)true);

	ASSERT(ft_is_lower('A'), (bool)false);
	ASSERT(ft_is_lower('Z'), (bool)false);
	ASSERT(ft_is_lower('#'), (bool)false);
}

////////////////////////////////////////////////////////////////////////////////