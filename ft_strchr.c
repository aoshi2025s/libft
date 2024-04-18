/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoaoki <yoaoki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:04:04 by yoaoki            #+#    #+#             */
/*   Updated: 2024/04/18 16:25:24 by yoaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*curr;
	char	altc;
	altc = (char)c;
	
	curr = (char *)str;
	while (*curr)
	{
		if (*curr == altc)
			return (curr);
		curr++;
	}
	if (altc == '\0')
		return (curr);
	return (0);
}
