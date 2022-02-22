/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isspace.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 14:48:22 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_isspace)
{
	massert(ft_isspace(' '), (bool)true);
	massert(ft_isspace('\t'), (bool)true);
	massert(ft_isspace('\n'), (bool)true);
	massert(ft_isspace('\v'), (bool)true);
	massert(ft_isspace('\f'), (bool)true);
	massert(ft_isspace('\r'), (bool)true);
	massert(ft_isspace('c'), (bool)false);
}

////////////////////////////////////////////////////////////////////////////////
