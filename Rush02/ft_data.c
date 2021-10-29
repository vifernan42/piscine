/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 21:29:41 by egiron-t          #+#    #+#             */
/*   Updated: 2021/03/14 21:50:12 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreria.h"

void			ft_data(unsigned long val)
{
	int target;

	target = 0;
	while (target < 10)
	{
		g_datos[target] = '0';
		target++;
	}
	target = 9;
	while (val >= 9)
	{
		g_datos[target] = val % 10 + 48;
		val = val / 10;
		target--;
	}
	g_datos[target] = val + 48;
	principal();
}
