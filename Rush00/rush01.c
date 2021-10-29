/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 13:05:22 by manrodri          #+#    #+#             */
/*   Updated: 2021/02/28 14:14:02 by tcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush01(int x, int y)
{
	int	i;
	int j;

	i = 0;
	while (i < y && x >= 0)
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0 && j == (x - 1)) || (j == 0 && i == (y - 1)))
				ft_putchar(92);
			else if ((i == 0 && j == 0) || (i == (y - 1) && j == (x - 1)))
				ft_putchar(47);
			else if (i == 0 || i == (y - 1))
				ft_putchar('*');
			else if (j == 0 || j == (x - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
