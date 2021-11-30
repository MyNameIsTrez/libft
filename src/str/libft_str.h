/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_str.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:29:01 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/25 17:32:26 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STR_H
# define LIBFT_STR_H

void	ft_free_split(char ***split);
char	*ft_rejoin_split(char **split, char *sep);
char	**ft_split_str(const char *str, const char *sep);
char	**ft_split(const char *str, char sep);
char	*ft_str_not_chr(const char *str, const int chr);
char	*ft_str_not_str(const char *haystack, const char *needle);
char	*ft_str_replace(char *str, char *str_search, char *str_replace);
char	*ft_stralloc(const size_t len);
char	*ft_strchr(const char *str, int chr);
int		ft_strcmp(const char *str1, const char *str2);
char	*ft_strdup(const char *str);
void	ft_striteri(char *str, void (*fun)(unsigned int, char*));
char	*ft_strjoin(const char *str1, const char *str2);
size_t	ft_strlcat(char *dst, const char *src, size_t dst_size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(const char *input_str, char (*fun)(unsigned int, char));
int		ft_strncmp(const char *str1, const char *str2, size_t len);
size_t	ft_strnlen(const char *str, const size_t max_len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *str, int chr);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strtrim_whitespace(const char *str);
char	*ft_strtrim(const char *str, const char *trim_set);
char	*ft_substr(const char *str, unsigned int start, size_t len);

#endif
