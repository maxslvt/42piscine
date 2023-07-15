/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:41:47 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/14 14:23:41 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_char_flags(char c)
{
	if (c >= '0' && c <= '9')
		return(1);
	else if (c == ' ' || (c >= 9 && c <= 13))
		return (2);
	else if (c == '+')
		return (3);
	else if (c == '-')
		return (4);
	else
		return (0);	
}

int	ft_atoi(char *str)
{
	int i = 0;
	int nb = 0;
	int sign = 1;

	while (ft_char_flags(str[i]) == 2)
		i++;
	while (ft_char_flags(str[i]) >= 3)
	{
		if (ft_char_flags(str[i]) == 4)
			sign *= -1;
		i++;
	}
	while (ft_char_flags(str[i]) == 1)
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * sign);
}
