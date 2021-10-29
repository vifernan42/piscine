/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 09:30:55 by vifernan          #+#    #+#             */
/*   Updated: 2021/03/12 09:08:21 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_unsign(unsigned char str2)
{
	char	*hexa;
	int		res;

	hexa = "0123456789abcdef";
	res = str2 / 16;
	ft_putchar(hexa[res]);
	res = str2 % 16;
	ft_putchar(hexa[res]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_unsign(str[i]);
		}
		i++;
	}
}
