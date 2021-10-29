/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dosdigitos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 21:02:06 by egiron-t          #+#    #+#             */
/*   Updated: 2021/03/14 21:20:02 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreria.h"

int	cons_two(char claveuno, char clavedos)
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
		if (linea[0] == claveuno && linea[1] == clavedos)
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
