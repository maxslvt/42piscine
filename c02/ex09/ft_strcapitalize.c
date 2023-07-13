/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:14:51 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/04 12:54:17 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	fonctionex(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if ((str[i - 1] < 'a' || str[i - 1] > 'z')
			&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
			&& (str[i - 1] < '0' || str[i - 1] > '9'))
		{
			str[i] = str[i] - 32;
		}
	}
	else if (str[i] >= 'A' && str[i] <= 'Z')
	{
		if (!(str[i - 1] < 'a' || str[i - 1] > 'z')
			&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
			&& (str[i - 1] < '0' || str[i - 1] > '9'))
		{
			str[i] = str[i] + 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if ((str[0] >= 'a' && str[0] <= 'z'))
	{
			str[0] = str[0] - 32;
	}
	i = 1;
	while (str[i])
	{
		fonctionex(str, i);
		i++;
	}
	return (str);
}
