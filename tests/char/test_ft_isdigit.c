/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_isdigit.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 14:45:09 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/16 14:47:13 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_isdigit)
{
	int	chr;

	chr = 0;
	while (chr <= 255)
	{
		ASSERT(ft_isdigit(chr), isdigit(chr));
		chr++;
	}
}

////////////////////////////////////////////////////////////////////////////////
