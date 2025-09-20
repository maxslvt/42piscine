/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masolet- <masolet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 14:04:45 by masolet-          #+#    #+#             */
/*   Updated: 2025/09/20 16:07:07 by masolet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_param(char *str);
int	ft_check_rules(int out[16]);

void	ft_fill_out(char *str, int out[16])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		if (str[i] == '\0')
			break ;
		out[j++] = str[i] - '0';
		i++;
	}
}

void	ft_init_tab(char *str)
{
	int	out[16];

	ft_check_param(str);
	ft_fill_out(str, out);
	ft_check_rules(out);
}

