/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:45:48 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/05 13:18:52 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*convert_hex(char *res, int x)
{
	res[0] = '\\';
	res[1] = '0' + x / 16;
	if (x % 16 > 9)
	{
		res[2] = 'a' + x % 16 -10;
	}
	else
	{
		res[2] = '0' + x % 16;
	}
	return (res);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[3];
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write (1, convert_hex(hex, str[i]), 3);
		}
		else
		{
			write (1, str + i, 1);
		}
		i++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("'\t', '\n', '\v', '\f', '\r'");
	return (0);
}
