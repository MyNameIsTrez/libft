/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_str.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/08 13:06:23 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/08 16:36:07 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static size_t	get_word_count(char str[], const char sep[])
{
	const size_t	sep_len = ft_strlen(sep);
	size_t			word_count;
	char			*sep_pos;

	word_count = 0;
	while (str != NULL && str[0] != '\0')
	{
		sep_pos = ft_strstr(str, sep);
		if (sep_pos == NULL)
			return (word_count + 1);
		if (&sep_pos[0] - &str[0] > (long)sep_len)
			word_count++;
		str = &sep_pos[sep_len];
		word_count++;
	}
	return (word_count);
}

static void	add_last_word(char *str, char ***split, size_t i)
{
	(*split)[i] = ft_strdup(str);
	if ((*split)[i] == NULL)
		ft_free_split(split);
	return ;
}

static void	add_words_to_split(char *str, const char *sep, char ***split)
{
	const size_t	sep_len = ft_strlen(sep);
	char			*sep_pos;
	size_t			i;

	i = 0;
	while (str != NULL && str[0] != '\0')
	{
		sep_pos = ft_strstr(str, sep);
		if (sep_pos == NULL)
			return (add_last_word(str, split, i));
		if (sep_pos - str > 0)
		{
			(*split)[i] = ft_substr(str, 0, (size_t)(sep_pos - str));
			if ((*split)[i] == NULL)
				return (ft_free_split(split));
			i++;
		}
		(*split)[i] = ft_strdup("");
		if ((*split)[i] == NULL)
			return (ft_free_split(split));
		i++;
		str = sep_pos + sep_len;
	}
}

/**
 * @brief Splits the string @p str by removing all occurrences of @p sep.\n
   It is designed to be reversible,
   which works by replacing any occurrence of @p sep with an empty string.
 *
 * @param str 💥 The string to be split.
 * @param sep The delimiter string.
 * @return The array of new strings resulting from the split;\n
   NULL if the allocation fails.
 */
char	**ft_split_str(const char *str, const char *sep)
{
	size_t	word_count;
	char	**split;

	if (str == NULL)
		return (NULL);
	word_count = get_word_count((char *)str, sep);
	split = malloc((word_count + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	split[word_count] = NULL;
	if (word_count > 0)
		add_words_to_split((char *)str, sep, &split);
	return (split);
}
