#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	sandr(char *str, char search, char replace)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == search)
		{
			str[i] = replace;
		}
		write(1, &str[i], 1);
		i++;
	}

}

int	main(int ac, char **av)
{
	if (ac == 4 && ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
	{
		sandr(av[1], av[2][0], av[3][0]);
	}
	write(1, "\n", 1);
}
