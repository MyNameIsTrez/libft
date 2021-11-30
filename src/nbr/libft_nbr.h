/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_nbr.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:27:42 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/25 17:28:45 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_NBR_H
# define LIBFT_NBR_H

int		ft_atoi(const char *str);
char	ft_digit_to_char(const int nbr);
size_t	ft_get_number_of_digits(int nbr);
char	*ft_itoa(int nbr);
int		ft_max(const int a, const int b);
int		ft_min(const int a, const int b);

#endif
