/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterator_struct.h                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 12:25:08 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/08 12:47:08 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ITERATOR_STRUCT_H
# define FT_ITERATOR_STRUCT_H

# include <stdbool.h>
# include <stdint.h>

typedef struct s_iterator
{
	intptr_t	start;
	intptr_t	current;
	intptr_t	next;
	intptr_t	stop;
	intptr_t	step;
	bool		initialized;
}	t_iterator;

#endif
