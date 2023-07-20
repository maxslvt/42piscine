/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:49:30 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/20 08:54:18 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

atoi = conversion d'une chaine de caractere en int
exemple:
in => "-++--152b69"(char*)
out => -152(int)

*/


// regarde de quel type caractere il s'agit
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
	int	i;

	nb = 0;
	sign = 1;
	i = 0;
	while (ft_char_flag(str[i]) == 2) // tant que les caracteres sont des espaces
		i++;
	while (ft_char_flag(str[i]) >= 3)// tant que les premiers caracteres sont de + ou des -
	{
		if (ft_char_flag(str[i]) == 4)// si il s'agit d'un -
			sign *= -1;					// inverser le signe
		i++;
	}
	while (ft_char_flag(str[i]) == 1)// tant que les caracteres sont des chiffres
	{
		nb = nb * 10 + (str[i] - 48);// nb est multiplie par 10 et on ajoute le chiffre
		i++;
	}
	return (nb * sign);// onretourne le nombre avec le signe
}
