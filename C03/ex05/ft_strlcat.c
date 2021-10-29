/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:23:54 by vifernan          #+#    #+#             */
/*   Updated: 2021/03/17 08:57:15 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_size(char *src1, unsigned int y)
{
	unsigned int w;

	w = 0;
	while (src1[y] != '\0')
	{
		y++;
		w++;
	}
	return (w);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int x;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	x = i;
	while (src[j] != '\0')
	{
		if (i < size - 1)
			dest[i] = src[j];
		else
			break ;
		i++;
		j++;
	}
	dest[i] = '\0';
	j = ft_size(src, j);
	if (size == 0)
		return (x);
	return (i + j);
}
