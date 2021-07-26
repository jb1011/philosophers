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

	// init_args(argc, argv, &ut);
	printf("%d", init_args(argc, argv, &ut));
}