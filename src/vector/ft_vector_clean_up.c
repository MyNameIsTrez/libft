/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vector_clean_up.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 16:05:55 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/11 16:15:58 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

#include "private/ft_private_vector.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Doesn't free vector contents, only the vectors,
 * along with their metadata.
 *
 * @return
 */
void	ft_vector_clean_up(void)
{
	t_metadata	**vector_of_metadata_ptr;
	size_t		index;

	vector_of_metadata_ptr = get_vector_of_metadata_ptr();
	if (*vector_of_metadata_ptr == NULL)
		return ;
	index = 1;
	while (index < (*vector_of_metadata_ptr)[0].size)
	{
		ft_free(&(*vector_of_metadata_ptr)[index].address);
		index++;
	}
	ft_free(vector_of_metadata_ptr);
	*vector_of_metadata_ptr = NULL;
}

////////////////////////////////////////////////////////////////////////////////
