/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoaoki <yoaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 02:09:28 by yoaoki            #+#    #+#             */
/*   Updated: 2024/04/23 03:27:56 by yoaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



#include <stdlib.h>
#include <stdio.h>

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
		{
			in_term = 0;
		}
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
	int	i;

	while (count > 0)
	{
		free(result[count - 1]);
		count--;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	size_t	term_count;
	
	if (!s)
		return ((char **)malloc(sizeof(char *)));	
	term_count = term_counter(s, c);	
	result = (char **)malloc(sizeof(char *) * (term_count + 1));
	if (!result)
		return (0);
		i = 0;
	while (i < term_count)
	{
		while (*s == c)
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
		i++;
	}
	result[i] = 0;
	return (result);
}

/*
#include <stdio.h>
#include <unistd.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf ("please input argument\n");
		return (0);
	}
	char *str = argv[1];
	char c = argv[2][0];
	size_t len = term_counter(str, c);
	printf ("term count : %zu\n", len);
	char **result;
	
	result = ft_split(str, c);
	for (int i = 0; i < len; i++)
	{
		printf("term[%d] : %s\n", i, result[i]);
	}
	return (0);
}
*/
