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

static char	*loop_digits(char *nptr, float *result_ptr, float *factor_ptr)
{
	bool	point_seen;

	point_seen = false;
	while (*nptr)
	{
		if (*nptr == '.')
			point_seen = true;
		else if (!ft_isdigit(*nptr))
			break ;
		if (point_seen && *nptr != '.')
			*factor_ptr /= 10;
		if (*nptr != '.')
			*result_ptr = *result_ptr * 10 + *nptr - '0';
		nptr++;
	}
	return (nptr);
}

static bool	validate_start(char **nptr_ptr)
{
	if (!ft_strset(*nptr_ptr, DIGITS))
		return (false);
	while (ft_isspace(**nptr_ptr))
		(*nptr_ptr)++;
	if ((*nptr_ptr)[0] == '-' || (*nptr_ptr)[0] == '+')
	{
		if ((!ft_isdigit((*nptr_ptr)[1]) && (*nptr_ptr)[1] != '.')
			|| ((*nptr_ptr)[1] == '.' && !ft_isdigit((*nptr_ptr)[2])))
			return (false);
	}
	if ((*nptr_ptr)[0] == '.' && !ft_isdigit((*nptr_ptr)[1]))
		return (false);
	return (true);
}

/**
 * @brief Imitation of strtof()
 *
 * @param nptr
 * @param endptr
 * @return float
 */
float	ft_strtof(char *nptr, char **endptr)
{
	float	result;
	float	factor;

	result = 0;
	if (!validate_start(&nptr))
	{
		*endptr = nptr;
		return (result);
	}
	factor = 1;
	if (*nptr == '-')
		factor = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	*endptr = loop_digits(nptr, &result, &factor);
	return (result * factor);
}

////////////////////////////////////////////////////////////////////////////////
