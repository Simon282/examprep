/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfleisc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:48:00 by sfleisc           #+#    #+#             */
/*   Updated: 2018/07/18 12:10:36 by sfleisc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d", ((atoi(av[1])) + (atoi(av[3]))));
		if (av[2][0] == '-')
			printf("%d", ((atoi(av[1])) - (atoi(av[3]))));
		if (av[2][0] == '*')
			printf("%d", ((atoi(av[1])) * (atoi(av[3]))));
		if (av[2][0] == '/')
			printf("%d", ((atoi(av[1])) / (atoi(av[3]))));
		if (av[2][0] == '%')
			printf("%d", ((atoi(av[1])) % (atoi(av[3]))));
	}
	printf("\n");
	return (0);
}
