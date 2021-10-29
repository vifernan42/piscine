/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 09:25:44 by vifernan          #+#    #+#             */
/*   Updated: 2021/03/02 15:41:33 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d, char u, char d1, char u1);

void	while2(char d, char u);

void	ft_print_comb2(void)
{
	char d;
	char u;

	d = '0';
	while (d <= '9')
	{
		u = '0';
		while (u <= '9')
		{
			while2(d, u);
			u++;
		}
		d++;
	}
}

void	while2(char d, char u)
{
	char d1;
	char u1;

	d1 = '0';
	while (d1 <= '9')
	{
		u1 = '0';
		while (u1 <= '9')
		{
			if ((d == d1 && u1 > u) || d1 > d)
				ft_putchar(d, u, d1, u1);
			u1++;
		}
		d1++;
	}
}

void	ft_putchar(char d, char u, char d1, char u1)
{
	write(1, &d, 1);
	write(1, &u, 1);
	write(1, " ", 1);
	write(1, &d1, 1);
	write(1, &u1, 1);
	if (d != '9' || u != '8' || d1 != '9' || u1 != '9')
		write(1, ", ", 2);
}
