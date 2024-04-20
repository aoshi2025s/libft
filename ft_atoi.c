/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoaoki <yoaoki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:05:27 by yoaoki            #+#    #+#             */
/*   Updated: 2024/04/21 03:50:03 by yoaoki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ');
}

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
/*
int	ft_atoi(const char *str)
{
	int	result;
	int	minus;

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
	while (*str && ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * minus);
}
*/
