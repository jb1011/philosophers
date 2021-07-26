#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <pthread.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>

typedef struct s_phil
{
	int	id;
	pthread_t	t_id;
}   t_phil;

typedef struct s_ut
{
	t_phil	*philo;
	int	ph_count;
	int	time_of_life;
	int	time_to_eat;
	int	time_to_sleep;
	int	num_of_meal;
}   t_ut;

int			ft_atoi(const char *nptr);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_itoa(int nb);
size_t		ft_strlen(const char *str);
int			test_int_max(char **argv, int i);
void		ft_sleep(long int time);
long int	get_time(void);

#endif