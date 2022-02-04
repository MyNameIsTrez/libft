/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_nbr.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:27:42 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/04 17:44:05 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_NBR_H
# define LIBFT_NBR_H

int		ft_atoi(const char *str);
char	ft_digit_to_char_base(const int nbr, unsigned int base);
char	ft_digit_to_char(const int nbr);
size_t	ft_get_digit_count_base(int nbr, unsigned int base);
size_t	ft_get_digit_count(int nbr);
char	*ft_int_to_str_base(int number, unsigned int base);
char	*ft_itoa(int nbr);
int		ft_max(const int a, const int b);
int		ft_min(const int a, const int b);

#endif
