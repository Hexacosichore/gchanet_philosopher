/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_actions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:06:55 by hthomas           #+#    #+#             */
/*   Updated: 2021/11/29 22:48:57 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	philo_eat(t_philo *philo)
{
	pthread_mutex_lock(philo->left_fork_id);
	philo_verbose(philo, "FORK LEFT", "START");
	pthread_mutex_lock(philo->right_fork_id);
	philo_verbose(philo, "FORK RIGHT", "START");
	philo_verbose(philo, "EAT", "START");
	usleep(philo->data->time_to_eat);
	philo_verbose(philo, "EAT", "END");
	pthread_mutex_unlock(philo->left_fork_id);
	philo_verbose(philo, "FORK LEFT", "END");
	pthread_mutex_unlock(philo->right_fork_id);
	philo_verbose(philo, "FORK RIGHT", "END");
}

void	philo_sleep(t_philo *philo)
{
	usleep(philo->data->time_to_sleep);
}
