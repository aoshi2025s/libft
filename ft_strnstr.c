/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoaoki <yoaoki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:05:15 by yoaoki            #+#    #+#             */
/*   Updated: 2024/04/24 18:28:33 by yoaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;

	if (!haystack || !needle)
		return (0);
	if (!(*needle))
		return ((char *)haystack);
	count = 0;
	while (*haystack && len)
	{
		if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
		{
			if (count + ft_strlen(needle) > len)
				return (0);
			else
				return ((char *)haystack);
		}
		haystack++;
		count++;
		len--;
	}
	return (0);
}
/*
#include <string.h>

int	main(void)
{
	ft_strnstr(((void *)0), "fake", 0);
	//strnstr(((void *)0), "fake", 0);
	return (0);
}
*/
