/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 12:39:29 by vifernan          #+#    #+#             */
/*   Updated: 2021/03/03 12:47:24 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	mayor(int nb);

void	ft_putnbr(int nb)
{
	mayor(nb);
	if (nb > -2147483648 && nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + 48);
		}
		else
			ft_putchar(nb + 48);
	}
	else if (nb <= 2147483647 && nb >= 0)
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + 48);
		}
		else
			ft_putchar(nb + 48);
	}
}

void	mayor(int nb)
{
	if (nb == -2147483648)
	{
		nb = 147483648;
		ft_putchar('-');
		ft_putchar('2');
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + 48);
		}
		else
			ft_putchar(nb + 48);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
