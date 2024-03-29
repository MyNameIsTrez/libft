/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:26 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/22 20:52:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/ft_allocating.h"
#include "src/str/ft_str.h"

static size_t	get_word_count(char *str, char sep)
{
	size_t	word_count;
	char	*start_of_word;
	char	*end_of_word;

	word_count = 0;
	while (str != NULL && str[0] != '\0')
	{
		start_of_word = ft_str_not_chr(str, sep);
		if (start_of_word == NULL)
			break ;
		end_of_word = ft_strchr(start_of_word, sep);
		str = end_of_word;
		word_count++;
	}
	return (word_count);
}

static bool	add_words_to_split(char *str, char sep, char ***split,
				char *description)
{
	size_t	i;
	char	*start_of_word;
	char	*end_of_word;
	t_u32	start_index;
	size_t	len;

	i = 0;
	while (str != NULL && str[0] != '\0')
	{
		start_of_word = ft_str_not_chr(str, sep);
		if (start_of_word == NULL)
			break ;
		end_of_word = ft_strchr(start_of_word, sep);
		start_index = (t_u32)(start_of_word - str);
		len = (size_t)(end_of_word - start_of_word);
		(*split)[i] = ft_substr(str, start_index, len, description);
		if ((*split)[i] == NULL)
		{
			ft_free_split(split);
			return (false);
		}
		str = end_of_word;
		i++;
	}
	return (true);
}

/**
 * @brief Splits the string @p str by removing all occurrences of @p sep.
 *
 * @param str The string to be split.
 * @param sep The delimiter character.
 * @return The array of new strings resulting from the split;\n
   NULL if the allocation fails.
 */
char	**ft_split(const char *str, char sep, char *description)
{
	size_t	word_count;
	char	**split;

	if (str == NULL)
		return (NULL);
	word_count = get_word_count((char *)str, sep);
	split = ft_malloc((word_count + 1), sizeof(char *), description);
	if (split == NULL)
		return (NULL);
	split[word_count] = NULL;
	if (add_words_to_split((char *)str, sep, &split, description) == false)
		return (NULL);
	return (split);
}
