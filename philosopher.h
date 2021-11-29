/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:06:55 by hthomas           #+#    #+#             */
/*   Updated: 2021/11/29 22:51:04 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_H
# define PHILOSOPHER_H
# include <pthread.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_philo
{
	unsigned int	id;
	pthread_t 		thread;
	t_data	 		*data;
	int				left_fork_id;
	int				right_fork_id;
	long long		last_meal;
}	t_philo;


typedef struct s_data
{
	unsigned int	philos_count;
	unsigned int	time_to_die;
	unsigned int	time_to_eat;
	unsigned int	time_to_sleep;
	unsigned int	dieded:1;
	t_philo			*philos;
}			t_data;

/*	PRINT	*/
int		print_usage(void);
int		print_error_arg(void);
int		print_error_init(void);
int		print_error_resolve(void);

/*	INIT	*/
int		init_data(t_data *data, int argc, char **argv);

/*	UTILS	*/
void	philo_verbose(t_philo *philo, char *action, char *status);
int		ft_strisdigit(char *str);
int		ft_atoi(const char *str);
void	free_data(t_data *dt);

/*	PUT	*/
void	ft_putstr(char *str);
void	ft_putnbr(long n);
void	ft_putchar(char c);

#endif