/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 21:01:14 by egiron-t          #+#    #+#             */
/*   Updated: 2021/03/14 21:33:18 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreria.h"

int	print_p(int posicion)
{
	if (posicion == 0)
		write(1, " billion", 9);
	if (posicion == 3)
		write(1, " million", 9);
	if (posicion == 6)
		write(1, " thousand", 10);
	return (0);
}
