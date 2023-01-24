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

static bool	validate_start(char *nptr)
{
	while (ft_isspace(*nptr))
		nptr++;
	if (nptr[0] == '-' || nptr[0] == '+')
	{
		if ((!ft_isdigit(nptr[1]) && nptr[1] != '.')
			|| (nptr[1] == '.' && !ft_isdigit(nptr[2])))
			return (false);
	}
	if (nptr[0] == '.' && !ft_isdigit(nptr[1]))
		return (false);
	if (nptr[0] == '\0')
		return (false);
	if (!ft_chr_in_str(nptr[0], "-+.") && !ft_isdigit(nptr[0]))
		return (false);
	return (true);
}

/**
 * @brief Imitates strtof(). Doesn't try to handle octal/hex/NAN/exponents.
 *
 * @param nptr
 * @param endptr If endptr is not NULL, a pointer to the character
 * after the last character used in the conversion is stored
 * in the location referenced by endptr.
 * @return float The converted value, if any. If no conversion is performed,
 * zero is returned and the value of nptr is stored
 * in the location referenced by endptr.
 * If the correct value would cause overflow, plus or minus INFINITY is returned
 * (according to the sign of the value).
 * If the correct value would cause underflow, zero is returned.
 */
float	ft_strtof(char *nptr, char **endptr)
{
	float	result;
	float	factor;

	result = 0;
	if (!validate_start(nptr))
	{
		*endptr = nptr;
		return (result);
	}
	while (ft_isspace(*nptr))
		nptr++;
	factor = 1;
	if (*nptr == '-')
		factor = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	*endptr = loop_digits(nptr, &result, &factor);
	return (result * factor);
}

////////////////////////////////////////////////////////////////////////////////
