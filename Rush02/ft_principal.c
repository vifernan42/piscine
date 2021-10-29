/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_principal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 21:10:08 by egiron-t          #+#    #+#             */
/*   Updated: 2021/03/14 21:28:42 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreria.h"

int	principal(void)
{
	int i;
	int position;

	i = 0;
	position = 0;
	while (i <= 9)
	{
		if (g_datos[i] != '0')
		{
			position = i;
			break ;
		}
		i++;
	}
	if (i == 10)
	{
		write(1, "zero", 4);
		return (0);
	}
	while (position <= 9)
	{
		if (position == 2 || position == 5 || position == 8)
		{
			cons_two(g_datos[position], g_datos[position + 1]);
			print_p(position + 1);
			position++;
		}
		else
		{
			cons_one(g_datos[position]);
			if (position == 1 || position == 4 || position == 7)
				write(1, " hundred", 9);
			print_p(position);
		}
		position++;
	}
	return (0);
}
