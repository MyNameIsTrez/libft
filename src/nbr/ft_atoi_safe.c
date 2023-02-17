/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_safe.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:20 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 14:38:56 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/char/ft_char.h"
#include "src/nbr/ft_nbr.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Converts @p str to a t_i32 and puts it in the pointer @p nbr.
 * This function is safer than ft_atoi() because it returns a boolean that
 * is false when no number was found in @p str.
 * With ft_atoi("0") and ft_atoi("a") you can't tell whether @p str
 * contains a number, because those calls both return 0.
 * If the return value is false, the value of @p nbr is undefined.
 *
 * @param str May start with whitespace, and the first encountered number will
 * be converted to a t_i32.
 * @param nbr The t_i32 will be put in here.
 * The dereferenced value won't be touched if no number was found in the string.
 * @return true if a number was found in @p str, false otherwise.
 */
bool	ft_atoi_safe(const char *str, t_i32 *nbr)
{
	bool	out_of_range;
	t_i32	i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		i++;
	else if (str[i] == '+')
		i++;
	if (!ft_isdigit(str[i]))
		return (false);
	*nbr = ft_atoi_range(str, &out_of_range);
	if (out_of_range)
		return (false);
	while (ft_isdigit(str[i]))
		i++;
	while (ft_isspace(str[i]))
		i++;
	return (str[i] == '\0');
}

////////////////////////////////////////////////////////////////////////////////
