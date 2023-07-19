/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:43:57 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/17 15:58:22 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		ft_putchar('0' + a / 10);
		ft_putchar('0' + a % 10);
		ft_putchar(' ');
		ft_putchar('0' + b / 10);
		ft_putchar('0' + b % 10);
		if (a < 98)
		{
			write(1, ", ", 2);
		}
		if (b < 99)
		{
			b = ++b + 1;
		}
	}
}
