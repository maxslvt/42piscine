/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:38:29 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/11 14:52:26 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j])
		{
			if (i != j && base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

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

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	sign;
	int	idx;

	nb = 0;
	sign = 1;
	idx = 0;
	if (!check_base(base))
		return (0);
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
