/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:52:17 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/13 21:53:01 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void main(int ac, char **av)
{
	int i;

	i=0;
	while (av[1][i])
	{
		if (av[1][i] >= 'a' && av[1][i] < 'z')
		{
			char test = av[1][i] + 1;
			write(1,&test,1);
		}
		else if (av[1][i] >= 'A' && av[1][i] < 'Z')
		{
			char test = av[1][i] + 1;
			write(1,&test,1);
		}
		else if (av[1][i] == 'Z' || av[1][i] == 'z')
		{
			char test = av[1][i] - 25;
			write(1,&test,1);
		}
		else{write(1,av[1] + i,1);}
		i++;
	}
}