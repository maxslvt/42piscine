/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masolet- <masolet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 13:06:24 by masolet-          #+#    #+#             */
/*   Updated: 2025/09/20 17:50:12 by masolet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_printerror(char *error_message);
void	ft_init_tab(char *str);

int	main(int ac, char **av)
{
	if (ac != 2)
		return (ft_printerror("Error: Usage: ./rush01 [param]\n"));
	ft_init_tab(av[1]);
	return (0);
}

// 1: mettre des 4 devant les 1
// 2: mettre  1234 devant les 4