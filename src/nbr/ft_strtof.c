/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtof.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:20 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:47:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Imitation of strtof()
 *
 * @param nptr
 * @param endptr
 * @return float
 */
float	ft_strtof(char *nptr, char **endptr)
{
	float	factor;
	bool	point_seen;
	float	result;

	result = 0;
	if (!ft_strset(nptr, DIGITS))
	{
		*endptr = nptr;
		return (result);
	}
	while (ft_isspace(*nptr))
		nptr++;
	if ((nptr[0] == '-' || nptr[0] == '+') && !ft_isdigit(nptr[1]) && nptr[1] != '.')
	{
		*endptr = nptr;
		return (result);
	}
	if (nptr[0] == '.' && !ft_isdigit(nptr[1]))
	{
		*endptr = nptr;
		return (result);
	}
	if ((nptr[0] == '-' || nptr[0] == '+') && nptr[1] == '.' && !ft_isdigit(nptr[2]))
	{
		*endptr = nptr;
		return (result);
	}
	factor = 1;
	if (*nptr == '-')
		factor = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	point_seen = false;
	while (*nptr)
	{
		if (*nptr == '.')
			point_seen = true;
		else if (!ft_isdigit(*nptr))
			break ;
		if (point_seen && *nptr != '.')
			factor /= 10;
		if (*nptr != '.')
			result = result * 10 + *nptr - '0';
		nptr++;
	}
	*endptr = nptr;
	return (result * factor);
}

////////////////////////////////////////////////////////////////////////////////
