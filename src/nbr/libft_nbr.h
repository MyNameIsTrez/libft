/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_nbr.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:27:42 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/14 14:47:42 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef LIBFT_NBR_H
# define LIBFT_NBR_H

////////////////////////////////////////////////////////////////////////////////

# include "libft.h"

////////////////////////////////////////////////////////////////////////////////

t_i32			ft_atoi_range(const char *str, bool *out_of_range);
t_status	ft_atoi_safe(const char *str, t_i32 *nbr);
t_i32			ft_atoi(const char *str);
char		ft_digit_to_char_base(t_i32 nbr, t_u32 base);
char		ft_digit_to_char(t_i32 nbr);
size_t		ft_get_digit_count_base_unsigned(uintmax_t nbr, t_u32 base);
size_t		ft_get_digit_count_base(intmax_t nbr, t_u32 base);
size_t		ft_get_digit_count(intmax_t nbr);
char		*ft_itoa(t_i32 nbr);
t_i32			ft_max(const t_i32 a, const t_i32 b);
t_i32			ft_min(const t_i32 a, const t_i32 b);
char		*ft_nbr_to_str(intmax_t number, t_u32 base);
char		*ft_unsigned_nbr_to_str(uintmax_t number, t_u32 base);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
