/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterator_status_struct.h                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 12:24:20 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/26 12:24:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ITERATOR_STATUS_STRUCT_H
# define FT_ITERATOR_STATUS_STRUCT_H

typedef enum e_iterator_status
{
	RESET,
	LOOPED,
	FINISHED,
}	t_iterator_status;

#endif
