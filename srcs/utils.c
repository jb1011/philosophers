#include "../Include/philosophers.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	less;
	int	result;

	i = 0;
	less = 1;
	result = 0;
	while ((nptr[i] >= 8 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			less *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - 48);
		i++;
	}
	return (result * less);
}

int	test_int_max(char **argv, int i)
{
	int	tab[100];
	char	*str;

	tab[i] = ft_atoi(argv[i]);
	str = ft_itoa(tab[i]);
	if (ft_strncmp(argv[i], str, ft_strlen(argv[i])) != 0)
	{
		free(str);
		return (0);
	}
	free(str);
	return (1);
}
