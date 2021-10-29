/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 09:26:25 by vifernan          #+#    #+#             */
/*   Updated: 2021/03/18 09:23:06 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
	{
		write(1, &argv[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int count;

	count = 1;
	while (argc > 1)
	{
		ft_print(argv[count]);
		write(1, "\n", 1);
		count++;
		argc--;
	}
}
