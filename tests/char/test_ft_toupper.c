/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_toupper.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 14:54:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/16 14:54:48 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_toupper)
{
	ASSERT(ft_toupper('a'), 'A');
	ASSERT(ft_toupper('z'), 'Z');
	ASSERT(ft_toupper('A'), 'A');
	ASSERT(ft_toupper('Z'), 'Z');
	ASSERT(ft_toupper('@'), '@');
}

////////////////////////////////////////////////////////////////////////////////