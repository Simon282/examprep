/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfleisc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:36:48 by sfleisc           #+#    #+#             */
/*   Updated: 2018/07/18 11:27:56 by sfleisc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	char letter;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			letter = av[1][i];
			if ('A' <= av[1][i] && 'Z' >= av[1][i])
				letter = 'Z' - av[1][i] + 'A';
			if ('a' <= av[1][i] && 'z' >= av[1][i])
				letter = 'z' - av[1][i] + 'a';
			write(1, &letter, 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
