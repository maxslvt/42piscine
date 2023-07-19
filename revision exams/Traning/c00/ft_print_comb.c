/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:07:45 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/17 15:42:59 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printint(int i)
{
	char	*num;

	num = "0123456789";
	write(1, num + i, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_printint(a);
				ft_printint(b);
				ft_printint(c);
				if (!(a == 7 && b == 8 && c == 9))
					write(1, ", ", 1);
				c++;
			}
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb();
}