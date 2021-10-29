/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 21:30:36 by egiron-t          #+#    #+#             */
/*   Updated: 2021/03/14 21:30:47 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreria.h"

unsigned long		ft_atoi(char *str)
{
	unsigned long	i;
	unsigned long	np;
	unsigned long	num;

	i = 0;
	np = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		np = np * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * np);
}
