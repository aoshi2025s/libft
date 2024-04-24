/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoaoki <yoaoki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:05:27 by yoaoki            #+#    #+#             */
/*   Updated: 2024/04/24 14:43:18 by yoaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ');
}

int	ft_atoi(const char *str)
{
	long long	result;
	int			minus;

	result = 0;
	minus = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		minus = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * minus);
}

/*
unsigned long long	calcu_atoi(unsigned long long result, const char *str)
{
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		if (result > LONG_MAX)
			break ;
		str++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	unsigned long long	result;
	int					minus;

	result = 0;
	minus = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		minus = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	result = calcu_atoi(result, str);
	if (minus == -1 && result > LONG_MAX)
		return (0);
	else if (minus == 1 && result >= LONG_MAX)
		return (-1);
	return ((int)result * minus);
}

#include <stdio.h>

int	main(void)
{
	int	result;
	int	expected;

	//9223372036854775808
	//18446744073709551616
	result = ft_atoi("18446744073709551616");
	expected = atoi("18446744073709551616");
	printf ("result: %d\n", result);
	printf ("expected: %d\n", expected);
	return (0);
}
*/
