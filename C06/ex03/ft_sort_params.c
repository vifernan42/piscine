/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 09:40:47 by vifernan          #+#    #+#             */
/*   Updated: 2021/03/18 09:25:36 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *aux)
{
	int		i;

	i = 0;
	while (aux[i])
	{
		write(1, &aux[i], 1);
		i++;
	}
}

int		ft_putstr(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if ((ft_putstr(argv[i], argv[j])) > 0)
			{
				aux = argv[j];
				argv[j] = argv[i];
				argv[i] = aux;
			}
			j++;
		}
		ft_print(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
