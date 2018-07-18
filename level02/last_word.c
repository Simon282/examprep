/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfleisc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:23:23 by sfleisc           #+#    #+#             */
/*   Updated: 2018/07/18 10:05:36 by sfleisc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void last_word(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		if ((str[x] == ' ' || str[x] == '\t') && str[x + 1] >= 33 && str[x + 1] <= 127)
			y = x + 1;
		x++;
	}
	while (str[y] >= 33 && str[y] <= 127)
	{
		write(1, &str[y], 1);
		y++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}

