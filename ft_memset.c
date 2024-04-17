/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoaoki <yoaoki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:01:53 by yoaoki            #+#    #+#             */
/*   Updated: 2024/04/17 22:26:13 by yoaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*result;

	result = (unsigned char *)b;
	while (len > 0)
	{
		*result = (unsigned char)c;
		result++;
		len--;
	}
	return (b);
}

