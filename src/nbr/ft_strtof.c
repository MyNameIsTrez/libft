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

#include "src/char/ft_char.h"
#include "src/str/ft_str.h"

static char	*parse_decimal_part(char *nptr, float *result_ptr)
{
	float	divider;

	divider = 1;
	while (ft_isdigit(*nptr))
	{
		divider /= 10;
		*result_ptr += (*nptr - '0') * divider;
		nptr++;
	}
	return (nptr);
}

static char	*parse_integer_part(char *nptr, float *result_ptr)
{
	while (ft_isdigit(*nptr))
	{
		*result_ptr = *result_ptr * 10 + *nptr - '0';
		nptr++;
	}
	return (nptr);
}

static bool	valid_input(char *nptr)
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
	float	sign;

	result = 0;
	if (!valid_input(nptr))
	{
		*endptr = nptr;
		return (result);
	}
	while (ft_isspace(*nptr))
		nptr++;
	sign = 1;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	nptr = parse_integer_part(nptr, &result);
	if (*nptr == '.')
		nptr++;
	nptr = parse_decimal_part(nptr, &result);
	*endptr = nptr;
	return (sign * result);
}
