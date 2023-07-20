int ft_atoi(char *str)
{
	int i;
	int res;
	res = 0;
	int sign;
	sign = 1;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res *10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}




#include<stdio.h>
#include <stdlib.h>
void main(int ac, char **str)
{
	printf("%d\n", ft_atoi(str[1]));
	printf("%d", atoi(str[1]));
}