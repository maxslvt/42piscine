/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex5exam1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:39:39 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/13 21:52:57 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/*Programme pour remplacer les chara 
multiples de 5 par 3 et multiples de 
3 par 5*/

void main(int ac, char **av)
{
	int i =0;
	while (av[1][i])
	{
		if (i % 3 == 0)
			write(1,"3",1);
		else if (i % 5 == 0)
			write(1,"5",1);
		else{write(1,av[1] + i,1);}
		i++;
	}
}