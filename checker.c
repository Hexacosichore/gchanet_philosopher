/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:06:55 by hthomas           #+#    #+#             */
/*   Updated: 2021/11/29 21:48:19 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	verif_args(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
		if (!ft_strisdigit(argv[i++]))
			return (0);
	return (1);
}
