/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:22:22 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/11 10:21:47 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_flag(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
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
	int	nb;
	int	sign;
	int	idx;

	nb = 0;
	sign = 1;
	idx = 0;
	while (ft_char_flag(str[idx]) == 2)
		idx++;
	while (ft_char_flag(str[idx]) >= 3)
	{
		if (ft_char_flag(str[idx]) == 4)
			sign *= -1;
		idx++;
	}
	while (ft_char_flag(str[idx]) == 1)
	{
		nb = nb * 10 + (str[idx] - 48);
		idx++;
	}
	return (nb * sign);
}
