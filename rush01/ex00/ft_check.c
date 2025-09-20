/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masolet- <masolet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 13:57:01 by masolet-          #+#    #+#             */
/*   Updated: 2025/09/20 18:33:42 by masolet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);
int	ft_printerror(char *error_message);
int	ft_rules_1(int i, int out[16]);
int	ft_rules_2(int i, int out[16]);
int	ft_rules_3(int i, int out[16]);
int	ft_rules_4(int i, int out[16]);

int	ft_check_param(char *str)
{
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(str);
	if (len != 31)
		return (ft_printerror("Error: Invalid arguments.\n"));
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		if (str[i] == '\0')
			break ;
		if ((str[i] < '1' || str[i] > '4'))
			return (ft_printerror("Error\n"));
		i++;
		if (str[i] && str[i] != ' ')
			return (ft_printerror("Error\n"));
	}
	return (0);
}

int	ft_check_rules(int out[16])
{
	int	i;

	i = 0;
	while (out[i])
	{
		if (out[i] == 1)
			ft_rules_1(i, out);
		else if (out[i] == 2)
			ft_rules_2(i, out);
		else if (out[i] == 3)
			ft_rules_3(i, out);
		else if (out[i] == 4)
			ft_rules_4(i, out);
		i++;
	}
	return (0);
}
