/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfleisc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:57:31 by sfleisc           #+#    #+#             */
/*   Updated: 2018/07/18 13:40:48 by sfleisc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	wdmatch(char *str, char *str2)
{
	while (*str)
	{
		while (*str2 && *str2 != *str)
			str2++;
		if (*str2 != *str)
			return (0);
		str++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		if (wdmatch(av[1], av[2]))
			while (*av[1])
				write(1, av[1]++, 1);
	write(1, "\n", 1);
	return (0);
}
