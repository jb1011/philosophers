/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdemenet <jdemenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:42:41 by jdemenet          #+#    #+#             */
/*   Updated: 2021/10/28 13:44:41 by jdemenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

long int	get_time(void)
{
	long int	time;
	struct timeval	curren_time;

	time = 0;
	gettimeofday(&curren_time, NULL);
	time = (curren_time.tv_sec * 1000) + (curren_time.tv_usec / 1000);
	return (time);
}

void	ft_sleep(long int time)
{
	long int		start;

	start = 0;
	start = get_time();
	while ((get_time() - start) < time)
		usleep(time / 10);
}
