/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksam <ksam@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 16:57:53 by tglory            #+#    #+#             */
/*   Updated: 2021/05/13 17:27:12 by ksam             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(char *msg)
{
	printf("\033[0;31mError\n%s.\033[0m\n", msg);
	exit(EXIT_FAILURE);
}

void	ft_error_memomy(void)
{
	ft_error("Unable to allocate memory");
}

void	ft_warn(char *msg)
{
	printf("\x1B[33mWarn\n%s.\033[0m\n", msg);
}
