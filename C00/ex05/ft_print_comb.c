/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 09:25:44 by vifernan          #+#    #+#             */
/*   Updated: 2021/03/03 18:09:39 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d, char u);

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = '0';
	while (c <= '9')
	{
		d = '0';
		while (d <= '9')
		{
			u = '0';
			while (u <= '9')
			{
				if (c < d && d < u)
					ft_putchar(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}

void	ft_putchar(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != '7' || d != '8' || u != '9')
		write(1, ", ", 2);
}
