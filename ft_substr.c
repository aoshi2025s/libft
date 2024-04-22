/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoaoki <yoaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:25:57 by yoaoki            #+#    #+#             */
/*   Updated: 2024/04/22 16:56:46 by yoaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*result;
	char const	*start_s;

	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	start_s = &s[start];
	ft_strlcpy(result, start_s, len + 1);
	return (result);
}
