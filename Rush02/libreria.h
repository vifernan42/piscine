/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libreria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiron-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 21:35:44 by egiron-t          #+#    #+#             */
/*   Updated: 2021/03/14 21:42:26 by egiron-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRERIA_H
# define LIBRERIA_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char				g_datos[10];
int					cons_one(char claveuno);
int					cons_two(char claveuno, char clavedos);
int					print_p(int posicion);
void				ft_digits(char *data3, unsigned long h);
void				ft_data(unsigned long val);
unsigned long		ft_atoi(char *str);
void				ft_check(char *argv);
int					principal();

#endif
