/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoaoki <yoaoki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:51:13 by yoaoki            #+#    #+#             */
/*   Updated: 2024/04/24 19:09:29 by yoaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*result_dst;
	unsigned char	*result_src;

	if (!dst && !src)
		return (0);
	result_dst = (unsigned char *)dst;
	result_src = (unsigned char *)src;
	while (n > 0)
	{
		*result_dst++ = *result_src++;
		n--;
	}
	return (dst);
}
