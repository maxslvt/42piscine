/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masolet- <masolet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:40:14 by masolet-          #+#    #+#             */
/*   Updated: 2025/09/20 18:33:27 by masolet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printerror(char *error_message);

int	ft_rules_1(int i, int out[16])
{
	if (((i >= 0 && i <= 3) || (i >= 8 && i <= 11)) && out[i + 4] == 1)
		return (ft_printerror("Error: (1 <----> 1)\n"));
	else if (((i >= 0 && i <= 2) || (i >= 4 && i <= 6) || (i >= 8 && i <= 10)
			|| (i >= 12 && i <= 14)) && out[i + 1] == 1)
		return (ft_printerror("Error: (1 1)\n"));
	return (0);
}

int	ft_rules_2(int i, int out[16])
{
	if (((i >= 0 && i <= 3) || (i >= 8 && i <= 11)) && out[i + 4] == 4)
		return (ft_printerror("Error: (2 <----> 4)\n"));
	else if (((i == 0) || (i == 4) || (i == 8) || (i == 12))
		&& out[i + 1] == 2 && out[i + 2] == 2 && out[i + 3] == 2)
		return (ft_printerror("Error: (2 2 2 2)\n"));
	return (0);
}

int	ft_rules_3(int i, int out[16])
{
	if (((i >= 0 && i <= 3) || (i >= 8 && i <= 11)) && out[i + 4] == 3)
		return (ft_printerror("Error: (3 <----> 3)\n"));
	else if (((i >= 0 && i <= 1) || (i >= 4 && i <= 5))
		&& out[i + 1] == 3 && out[i + 2] == 3)
		return (ft_printerror("Error: (3 3 3)\n"));
	else if (((i >= 12 && i <= 13) || (i >= 8 && i <= 9))
		&& out[i + 1] == 3 && out[i + 2] == 3)
		return (ft_printerror("Error: (3 3 3)\n"));
	return (0);
}

int	ft_rules_4(int i, int out[16])
{
	if (((i >= 0 && i <= 3) || (i >= 8 && i <= 11)) && out[i + 4] == 4)
		return (ft_printerror("Error: (4 <----> 4)\n"));
	else if (((i >= 0 && i <= 3) || (i >= 8 && i <= 11)) && out[i + 4] != 1)
		return (ft_printerror("Error: (4 <----> [?1])\n"));
	else if (((i >= 4 && i <= 7) || (i >= 12 && i <= 15)) && out[i - 4] != 1)
		return (ft_printerror("Error: ([?1] <----> 4)\n"));
	else if (((i >= 0 && i <= 2) || (i >= 4 && i <= 6) || (i >= 8 && i <= 10)
			|| (i >= 12 && i <= 14)) && out[i + 1] == 4)
		return (ft_printerror("Error: (4 4)\n"));
	return (0);
}
