/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:26 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 15:31:39 by sbos          ########   odam.nl         */
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
			return ((char *)str + i);
		i++;
	}
	if (chr == '\0')
		return ((char *)str + i);
	else
		return (NULL);
}

// printf("foo\n");
// printf("start_of_word: '%s'\n", start_of_word);
// printf("end_of_word: '%s'\n", end_of_word);
static size_t	get_word_count(char *str, char chr)
{
	size_t	word_count;
	char	*start_of_word;
	char	*end_of_word;

	word_count = 0;
	while (str != NULL && *str != '\0')
	{
		start_of_word = ft_str_not_chr(str, chr);
		if (!start_of_word)
			break ;
		end_of_word = ft_strchr(start_of_word, chr);
		str = end_of_word;
		word_count++;
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

// printf("adding word '%s' to index %lu\n", word, i);
static void	add_words_to_split(char *str, char chr, char ***split)
{
	size_t	i;
	char	*start_of_word;
	char	*end_of_word;
	size_t	len;

	i = 0;
	while (str != NULL && *str != '\0')
	{
		start_of_word = ft_str_not_chr(str, chr);
		if (!start_of_word)
			break ;
		end_of_word = ft_strchr(start_of_word, chr);
		len = end_of_word - start_of_word;
		(*split)[i] = ft_substr(str, start_of_word - str, len);
		if ((*split)[i] == NULL)
			return (free_split(split));
		str = end_of_word;
		i++;
	}
}

// ft_strchr's returned char* includes the char c character after the word
// printf("word_count: %lu\n", word_count);
// printf("start_of_word: '%s'\nend_of_word: '%s'\nword: '%s'\n",
// 			start_of_word, end_of_word, word);
char	**ft_split(char const *str, char chr)
{
	size_t	word_count;
	char	**split;

	word_count = get_word_count((char *)str, chr);
	split = malloc((word_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split[word_count] = NULL;
	add_words_to_split((char *)str, chr, &split);
	return (split);
}
