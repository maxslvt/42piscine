/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:49:30 by msolet-l          #+#    #+#             */
/*   Updated: 2023/07/13 21:52:54 by msolet-l         ###   ########.fr       */
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
	int	idx;

	nb = 0;
	sign = 1;
	idx = 0;
	while (ft_char_flag(str[idx]) == 2) // tant que les caracteres sont des espaces
		idx++;
	while (ft_char_flag(str[idx]) >= 3)// tant que les premiers caracteres sont de + ou des -
	{
		if (ft_char_flag(str[idx]) == 4)// si il s'agit d'un -
			sign *= -1;					// inverser le signe
		idx++;
	}
	while (ft_char_flag(str[idx]) == 1)// tant que les caracteres sont des chiffres
	{
		nb = nb * 10 + (str[idx] - 48);// nb est multiplie par 10 et on ajoute le chiffre
		idx++;
	}
	return (nb * sign);// onretourne le nombre avec le signe
}
