/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:06:55 by hthomas           #+#    #+#             */
/*   Updated: 2021/11/29 22:45:36 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	ft_strisdigit(char *str)
{
	while (*str)
		if (*str < '0' || *str++ > '9')
			return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = 1;
	while ((str[j] >= 9 && str[j] <= 13) || (str[j] == ' '))
		j++;
	if (str[j] == '-' || str[j] == '+')
	{
		if (str[j++] == '-')
			n = n * -1;
	}
	while (str[j] >= 48 && str[j] <= 57)
		i = i * 10 + (str[j++] - 48);
	return (i * n);
}

void	free_data(t_data *dt)
{
	free(dt->philos);
}

void	philo_verbose(t_philo *philo, char *action, char *status)
{
	ft_putnbr(philo->id);
	ft_putchar('\t');
	ft_putstr(action);
	ft_putchar('\t');
	ft_putstr(status);
	ft_putchar('\n');
}
