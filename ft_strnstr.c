/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoaoki <yoaoki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:05:15 by yoaoki            #+#    #+#             */
/*   Updated: 2024/04/21 02:12:14 by yoaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	has_str(const char *s1, const char *s2)
{
	int	s2_len;

	s2_len = ft_strlen(s2);
	while (s2_len)
	{
		if (*s1 != *s2)
			return (0);
		s2_len--;
		s1++;
		s2++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (has_str(haystack, needle))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
