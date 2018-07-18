/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfleisc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:24:18 by sfleisc           #+#    #+#             */
/*   Updated: 2018/07/11 15:05:46 by sfleisc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (!(n % 2))
		n /= 2;
	return ((n == 1) ? 1 : 0);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		is_power_of_2(atoi(av[1])) ? printf("YES\n") : printf("NO\n");
	}
	return (0);
}
