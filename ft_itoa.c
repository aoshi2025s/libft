/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoaoki <yoaoki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 01:01:08 by yoaoki            #+#    #+#             */
/*   Updated: 2024/04/23 01:58:08 by yoaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen(long long n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long long	num;
	char		*result;
	size_t		len;

	num = n;
	len = ft_numlen(num);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	result[len--] = '\0';
	if (num == 0)
		*result = '0';
	if (num < 0)
	{
		num *= -1;
		*result = '-';
	}
	while (num > 0)
	{
		result[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int		n;
	char	*str;

	n = atoi(argv[1]);
	printf ("%d len : %zu\n", atoi(argv[1]), ft_numlen(atoi(argv[1])));
	str = ft_itoa(atoi(argv[1]));
	printf ("%d to_string : %s\n", atoi(argv[1]), str);
	return (0);
}
*/
