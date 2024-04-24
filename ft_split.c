/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoaoki <yoaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 02:09:28 by yoaoki            #+#    #+#             */
/*   Updated: 2024/04/25 05:39:49 by yoaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	term_counter(char const *s, char c)
{
	size_t	count;
	int		in_term;

	count = 0;
	in_term = 0;
	while (*s)
	{
		if (!in_term && *s != c)
		{
			count++;
			in_term = 1;
		}
		else if (in_term && *s == c)
			in_term = 0;
		s++;
	}
	return (count);
}

size_t	splitstr_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

void	split_free(char **result, int count)
{
	while (count > 0)
	{
		free(result[count - 1]);
		count--;
	}
	free(result);
}

char	**ft_split_dup(char **result, char const *s, char c, size_t size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		while (*s == c && *s)
			s++;
		result[i] = (char *)malloc(sizeof(char) * (splitstr_len(s, c) + 1));
		if (!result[i])
		{
			split_free(result, i);
			return (0);
		}
		j = 0;
		while (*s != c && *s)
			result[i][j++] = *s++;
		result[i][j] = '\0';
		s += splitstr_len(s, c);
		i++;
	}
	result[i] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	size;

	if (!s)
		return (0);
	size = term_counter(s, c);
	result = (char **)malloc(sizeof(char *) * (size + 1));
	if (!result)
		return (0);
	result = ft_split_dup(result, s, c, size);
	return (result);
}
