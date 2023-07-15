/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:28:22 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/14 14:38:10 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int min, int max)
{
	int i;
	char *tab;

	if (min >= max)
		return (NULL);
	tab = (int)malloc(sizeof(int) * (max - min));
	i = min;
	while (i < max)
	{
		tab[i] = min;
		i++;
	}
	return (tab);
}
