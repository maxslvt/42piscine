/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:30:00 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/14 10:39:10 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_rotone(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			char t = str[i] + 1;
			write(1, &t, 1);
		}
		i++;
		/*
			Same for 'A' 'Z' ...
		*/
	}
}

int main(int ac, char **av)
{
	ft_rotone(av[1]);
}
