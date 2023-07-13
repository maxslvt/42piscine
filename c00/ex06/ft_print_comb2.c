/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 08:57:29 by msolet-l          #+#    #+#             */
/*   Updated: 2023/06/29 09:58:19 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;

	i = 0;
	j = 1;
	while (i < 99)
	{
		ft_putchar(i / 10 + '0');
		ft_putchar(i % 10 + '0');
		ft_putchar(' ');
		ft_putchar(j / 10 + '0');
		ft_putchar(j % 10 + '0');
		if (i < 98)
		{
			write(1, ", ", 2);
		}
		if (++j > 99)
		{
			j = ++i + 1;
		}
	}	
}
