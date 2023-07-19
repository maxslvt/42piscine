/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 21:09:47 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/17 15:00:54 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	long	nb = nbr;
	if (nb < 0)
	{
		nb = -nb;
		write(1,"-",1);
	}
	if (nb >= 9)
	{
		ft_putnbr(nb / 10);
	}
	nb %= 10;
	char unit = '0' + nb;
	write(1, &unit, 1);
}

int main()
{
	ft_putnbr(-2147483648);
}


#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		div;
	int		mod;

	div = nb / 10;
	mod = nb % 10;

	if (div)
		ft_putnbr(div);
	if (nb < 0)
	{
		if (!div)
			ft_putchar('-');
		mod = -mod;
	}
	ft_putchar(mod + '0');
}

int		main(void)
{
	ft_putnbr(2147483647);
	return (0);
}