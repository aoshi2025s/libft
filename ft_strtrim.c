/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoaoki <yoaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:38:42 by yoaoki            #+#    #+#             */
/*   Updated: 2024/04/22 19:02:32 by yoaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_exist_char(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

size_t	ft_strtrim_len(char const *s1, char const *set)
{
	size_t	len;
	
	len = 0;
	while (*s1)
	{
		if (!is_exist_char(*s1, set))
			len++;
		s1++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	char	*curr;
	
	if (!s1)
		return ((char *)malloc(1));
	if (!set)
		return (ft_strdup(s1));
	result = (char *)malloc(ft_strtrim_len(s1, set) + 1);
	if (!result)
		return (NULL);
	curr = result;
	while (*s1)
	{
		if (!is_exist_char(*s1, set))
		{
			*curr = *s1;
			curr++;
		}
		s1++;
	}
	*curr = '\0';
	return (result);
}
