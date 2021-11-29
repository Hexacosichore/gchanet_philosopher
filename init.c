/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:06:55 by hthomas           #+#    #+#             */
/*   Updated: 2021/11/29 22:50:02 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static int	init_philo(t_data *dt)
{
	unsigned int	i;
	dt->philos = (t_philo *)fmalloc(sizeof(t_philo) * dt->philos_count);
	if (!dt->philos)
		return (0);
	i = -1;
	while (++i < dt->philos_count)
	{
		dt->philos[i].id = i;
		dt->philos[i].data = dt;
	}
	return (1);
}

int	init_data(t_data *dt, int argc, char **argv)
{
	dt->philos_count = ft_atoi(argv[1]);
	dt->time_to_die = ft_atoi(argv[2]);
	dt->time_to_eat = ft_atoi(argv[3]);
	dt->time_to_sleep = ft_atoi(argv[4]);
	dt->dieded = 0;
	return (!init_philo(dt));
}
