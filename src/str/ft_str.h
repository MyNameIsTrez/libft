/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/25 17:29:01 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/25 15:32:01 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#ifndef FT_STR_H
# define FT_STR_H

////////////////////////////////////////////////////////////////////////////////

# include "libft.h"

////////////////////////////////////////////////////////////////////////////////

bool		ft_chr_in_str(const t_i32 chr, const char *str);
char		*ft_chr_repeat(const char chr, size_t repeat);
t_status	ft_empty_str_assign(char **dst);
char		*ft_empty_str(void);
void		ft_free_split(char ***split);
char		*ft_rejoin_split(char **split, char *sep);
char		**ft_split_str(const char *str, const char *sep);
char		**ft_split(const char *str, char sep);
t_status	ft_str_assign(char **dst, char *src);
size_t		ft_str_count_chr(char *str, const char chr);
size_t		ft_str_count_str_overlap(char *str1, const char *str2);
size_t		ft_str_count_str(char *str1, const char *str2);
bool		ft_str_eq(const char *str1, const char *str2);
bool		ft_str_is_empty(const char *str);
char		*ft_str_lower(char *str);
char		*ft_str_not_chr(const char *str, const t_i32 chr);
char		*ft_str_not_str(const char *haystack, const char *needle);
char		*ft_str_repeat(char *str, size_t repeat);
char		*ft_str_replace(char *str, char *str_search, char *str_replace);
char		*ft_str_upper(char *str);
char		*ft_stralloc(const size_t len);
char		*ft_strchr(const char *str, t_i32 chr);
t_i32		ft_strcmp(const char *str1, const char *str2);
char		*ft_strdup(const char *str);
void		ft_striteri(char *str, void (*fun)(t_u32, char*));
char		*ft_strjoin_and_free_left(char *left, char *right);
char		*ft_strjoin_array(char *array[]);
char		*ft_strjoin(const char *str1, const char *str2);
size_t		ft_strlcat(char *dst, const char *src, size_t dst_size);
size_t		ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t		ft_strlen(const char *str);
char		*ft_strmapi(const char *input_str, char (*fun)(t_u32, char));
t_i32		ft_strncmp(const char *str1, const char *str2, size_t len);
size_t		ft_strnlen(const char *str, const size_t max_len);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrchr(const char *str, t_i32 chr);
char		*ft_strset(char *haystack, char *set);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strtrim_whitespace(const char *str);
char		*ft_strtrim(const char *str, const char *trim_set);
char		*ft_substr(const char *str, t_u32 start, size_t len);

////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////
