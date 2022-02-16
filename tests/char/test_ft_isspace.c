/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isspace.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 14:48:22 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/16 14:52:21 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_isspace)
{
	ASSERT(ft_isspace(' '), (bool)true);
	ASSERT(ft_isspace('\t'), (bool)true);
	ASSERT(ft_isspace('\n'), (bool)true);
	ASSERT(ft_isspace('\v'), (bool)true);
	ASSERT(ft_isspace('\f'), (bool)true);
	ASSERT(ft_isspace('\r'), (bool)true);
	ASSERT(ft_isspace('c'), (bool)false);
}

////////////////////////////////////////////////////////////////////////////////
