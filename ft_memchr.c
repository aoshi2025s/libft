/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoaoki <yoaoki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:04:37 by yoaoki            #+#    #+#             */
/*   Updated: 2024/04/18 18:01:01 by yoaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	target;
	unsigned char	*curr;

	target = (unsigned char)c;
	curr = (unsigned char *)str;
	while (n)
	{
		if (*curr == target)
			return (curr);
		curr++;
		n--;
	}
	return (0);
}
