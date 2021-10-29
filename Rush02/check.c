/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 21:31:09 by egiron-t          #+#    #+#             */
/*   Updated: 2021/03/14 21:31:37 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreria.h"

void				ft_check(char *argv)
{
	unsigned long	val;
	unsigned int	i;
	unsigned int	flag;

	flag = 0;
	i = 0;
	while (argv[i] != '\0')
	{
		if ((argv[i] >= 0 && argv[i] <= 31) ||
				(argv[i] > 32 && argv[i] < 48) || argv[i] > 58)
			flag++;
		i++;
	}
	if (flag == 0)
	{
		val = ft_atoi(argv);
		if (val > 4294967295)
			write(1, "error\n", 6);
		else
			ft_data(val);
	}
	else
		write(1, "error\n", 6);
}
