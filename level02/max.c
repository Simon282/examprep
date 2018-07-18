/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfleisc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 13:00:23 by sfleisc           #+#    #+#             */
/*   Updated: 2018/07/18 11:11:04 by sfleisc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	unsigned int	cmp;
	int	cpy;

	cmp = 0;
	cpy = tab[0];
	while (cmp < len)
	{
		if (cpy < tab[cmp])
			cpy = tab[cmp];
		++cmp;
	}
	if (cmp == len)
		return (cpy);
	return (0);
}
