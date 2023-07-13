/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:05:31 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/13 21:52:56 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*

range = cree un tableau allant de min(inclus) a max(exclus)
exemple:
in => 2,5(int)(int)
out => [2,3,4](int *)

*/

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)// si min est superieur a max
		return (NULL);
	tab = (int*)malloc(sizeof(int) * (max - min));// cree un tableau de int de taille max - min
	i = min;
	while (i < max)// boucle qui parcours tab
	{
		tab[i] = min;// rempli avec les nombre en commencant par min
		i++;
	}
	return (tab);
}
