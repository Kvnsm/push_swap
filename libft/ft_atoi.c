/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglory <tglory@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 17:51:41 by tglory            #+#    #+#             */
/*   Updated: 2020/10/26 17:51:41 by tglory           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	res;
	int		neg;

	res = 0;
	neg = 1;
	while ((*str == '\t') || (*str == '\v') || (*str == '\n')
			|| (*str == '\r') || (*str == '\f') || (*str == ' '))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			neg = -1;
			str++;
		}
		else
			str++;
	}
	while ((*str >= '0' && *str <= '9') && *str != '\0')
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * neg);
}
