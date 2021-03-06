/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdemenet <jdemenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:43:01 by jdemenet          #+#    #+#             */
/*   Updated: 2021/10/28 13:44:36 by jdemenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include/philosophers.h"

int	init_args(int argc, char **argv, t_ut *ut)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (test_int_max(argv, i) == 0)
			return (0);
		i++;
	}
	if (argc == 5 || argc == 6)
	{
		ut->ph_count = ft_atoi(argv[1]);
		ut->time_of_life = ft_atoi(argv[2]);
		ut->time_to_eat = ft_atoi(argv[3]);
		ut->time_to_sleep = ft_atoi(argv[4]);
		ut->num_of_meal = -42;
		if (argc == 6)
			ut->num_of_meal = ft_atoi(argv[5]);
		if (ut->ph_count <= 0 || ut->time_of_life <= 0 || ut->time_to_eat <= 0 || ut->time_to_sleep <= 0)
			return (0);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_ut	ut;

	if (init_args(argc, argv, &ut) == 1)
	{

		ut.philo = malloc(sizeof(t_phil) * ut.ph_count);
	}
	else
		printf("ERROR IN ARGUMENTS");
	
	return (0);
}
