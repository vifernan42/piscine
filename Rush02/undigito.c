/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   undigito.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 21:06:49 by egiron-t          #+#    #+#             */
/*   Updated: 2021/03/14 21:22:27 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreria.h"

int	cons_one(char claveuno)
{
	char	buffer[1];
	int		numbytes;
	char	linea[120];
	int		nl;
	int		fichero;

	fichero = open("numbers.dict", 0);
	nl = 0;
	while ((numbytes = read(fichero, &buffer, 1)) > 0)
	{
		linea[nl] = *buffer;
		nl++;
		if (*buffer == '\n')
			nl = 0;
		if (*buffer == claveuno)
		{
			nl = 0;
			numbytes = read(fichero, &buffer, 1);
			numbytes = read(fichero, &buffer, 1);
			while (*buffer != '\n')
			{
				write(1, &buffer, 1);
				numbytes = read(fichero, &buffer, 1);
			}
			return (1);
		}
	}
	close(fichero);
	return (0);
}
