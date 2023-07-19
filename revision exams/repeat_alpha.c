/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:01:06 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/19 10:34:18 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			j = 0;
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				while (j < av[1][i] - 'a' + 1)
				{
					write(1, &av[1][i], 1);
					j++;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				while (j < av[1][i] - 'A' + 1)
				{
					write(1, &av[1][i], 1);
					j++;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
