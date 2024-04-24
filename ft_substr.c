/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoaoki <yoaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:25:57 by yoaoki            #+#    #+#             */
/*   Updated: 2024/04/24 20:19:59 by yoaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*result;
	char const	*start_s;

	if (!s)
		return (0);
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	if (start >= ft_strlen(s) || len == 0)
		return (result);
	start_s = &s[start];
	ft_strlcpy(result, start_s, len + 1);
	return (result);
}
