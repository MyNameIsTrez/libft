/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:26 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/04 15:56:04 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static char	*ft_str_not_chr(const char *str, const int chr)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != chr)
			return (&((char *)str)[i]);
		i++;
	}
	if (chr == '\0')
		return (&((char *)str)[i]);
	else
		return (NULL);
}

static size_t	get_word_count(char *str, char chr)
{
	size_t	word_count;
	char	*start_of_word;
	char	*end_of_word;

	word_count = 0;
	while (*str != '\0')
	{
		start_of_word = ft_str_not_chr(str, chr);
		if (start_of_word == NULL)
			break ;
		end_of_word = ft_strchr(start_of_word, chr);
		str = end_of_word;
		word_count++;
		if (str == NULL)
			break ;
	}
	return (word_count);
}

static void	free_split(char ***split)
{
	size_t	i;

	i = 0;
	while ((*split)[i] != NULL)
	{
		free((*split)[i]);
		i++;
	}
	free(*split);
	*split = NULL;
}

static void	add_words_to_split(char *str, char chr, char ***split)
{
	size_t	i;
	char	*start_of_word;
	char	*end_of_word;
	size_t	len;

	i = 0;
	while (*str != '\0')
	{
		start_of_word = ft_str_not_chr(str, chr);
		if (start_of_word == NULL)
			break ;
		end_of_word = ft_strchr(start_of_word, chr);
		len = (size_t)(end_of_word - start_of_word);
		(*split)[i] = ft_substr(str, (unsigned int)(start_of_word - str), len);
		if ((*split)[i] == NULL)
			return (free_split(split));
		str = end_of_word;
		if (str == NULL)
			break ;
		i++;
	}
}

/**
 * @brief Splits the string @p str by removing all occurrences of @p sep.
 *
 * @param str The string to be split.
 * @param sep The delimiter character.
 * @return The array of new strings resulting from the split;\n
   NULL if the allocation fails.
 */
char	**ft_split(const char *str, char sep)
{
	size_t	word_count;
	char	**split;

	word_count = get_word_count((char *)str, sep);
	split = malloc((word_count + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	split[word_count] = NULL;
	add_words_to_split((char *)str, sep, &split);
	return (split);
}
