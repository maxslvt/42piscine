/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:42:27 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/13 21:52:59 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_last_word(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i -= 1;
	while (str[i] == ' ' || str[i] == '\t')
		i--;
	while ((str[i] != ' ' && str[i] != '\t') && i >= 0)
		i--;
	i += 1;
	while (str[i] && str[i] != ' ' && str[i] != '\t')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_last_word(av[1]);
	ft_putchar('\n');
	return (0);
}
