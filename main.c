/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:06:55 by hthomas           #+#    #+#             */
/*   Updated: 2021/11/29 22:50:31 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	*routine(void *arg)
{
	t_philo	*philo;

	philo = (t_philo *)arg;
	philo->last_meal = timestamp();
	while (!philo->data->dieded)
	{
	
	}
	return (NULL);
}

int		philo_resolve(t_data *dt)
{
	int	i;

	i = -1;
	while (++i < dt->philos_count)
	{
		if (pthread_create(dt->philos[i].thread, NULL,
			&routine, &(dt->philos[i])))
			return (0);
		usleep(10000);
	}
	return (1);
}


int	main(int argc, char **argv)
{
	t_data dt;

	if (argc != 5)
		return (print_usage());
	if (!verif_args(argc, argv))
		return (print_error_arg());
	if (init_data(&dt, argc, argv))
		return (print_error_init());
	if (philo_resolve(&dt))
		return (print_error_resolve());
	free_data(&dt);
}