/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 13:05:22 by manrodri          #+#    #+#             */
/*   Updated: 2021/02/28 13:56:58 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush04(int x, int y)
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
				ft_putchar('C');
			else if ((i == 0 && j == 0) || (i == (y - 1) && j == (x - 1)))
				ft_putchar('A');
			else if (i == 0 || i == (y - 1))
				ft_putchar('B');
			else if (j == 0 || j == (x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
