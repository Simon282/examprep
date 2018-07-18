/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfleisc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:37:27 by sfleisc           #+#    #+#             */
/*   Updated: 2018/07/09 15:40:09 by sfleisc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
	int	i;
	int	len;
	char	temp;

	len = 0;
	while (str[len])
		len += 1;
	i = -1;
	while (++i < --len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
	}
	str[i] = '\0';
	return (str);
}
