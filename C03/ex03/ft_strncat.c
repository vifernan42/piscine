/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:59:02 by vifernan          #+#    #+#             */
/*   Updated: 2021/03/17 09:04:47 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	int				j;
	unsigned int	y;

	i = 0;
	j = 0;
	y = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && y < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}
