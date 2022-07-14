/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_nbr.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:27:42 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:41:16 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef LIBFT_NBR_H
# define LIBFT_NBR_H

////////////////////////////////////////////////////////////////////////////////

# include "libft.h"

////////////////////////////////////////////////////////////////////////////////

int			ft_atoi_range(const char *str, bool *out_of_range);
t_status	ft_atoi_safe(const char *str, int *nbr);
int			ft_atoi(const char *str);
char		ft_digit_to_char_base(int nbr, t_u32 base);
char		ft_digit_to_char(int nbr);
size_t		ft_get_digit_count_base_unsigned(uintmax_t nbr, t_u32 base);
size_t		ft_get_digit_count_base(intmax_t nbr, t_u32 base);
size_t		ft_get_digit_count(intmax_t nbr);
char		*ft_itoa(int nbr);
int			ft_max(const int a, const int b);
int			ft_min(const int a, const int b);
char		*ft_nbr_to_str(intmax_t number, t_u32 base);
char		*ft_unsigned_nbr_to_str(uintmax_t number, t_u32 base);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
