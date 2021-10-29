/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:15:47 by vifernan          #+#    #+#             */
/*   Updated: 2021/03/17 19:54:01 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	if (nb == 2147483647 || nb > 2147483629)
	{
		nb = 2147483647;
		return (nb);
	}
	if (nb <= 2)
		return (2);
	while (i != 1)
	{
		i = ft_is_prime(nb);
		nb++;
	}
	nb--;
	return (nb);
}
