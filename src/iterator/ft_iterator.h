/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterator.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 11:34:01 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/28 11:30:46 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef FT_ITERATOR_H
# define FT_ITERATOR_H

////////////////////////////////////////////////////////////////////////////////

# include "utils/ft_iterator_utils.h"

////////////////////////////////////////////////////////////////////////////////

# include "range/ft_iterator_range_getters.h"

////////////////////////////////////////////////////////////////////////////////

t_iterator_status	ft_iterate(t_iterator *it);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
