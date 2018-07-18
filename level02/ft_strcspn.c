/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfleisc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 13:20:53 by sfleisc           #+#    #+#             */
/*   Updated: 2018/07/11 13:23:19 by sfleisc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strcspn(const char *s, const char *reject)
{
	const char *s1 = s;
	const char *s2;

	while (*s1)
	{
		s2 = reject;
		while (*s2)
		{
			if (*s1 == *s2++)
				return (s1 - s);
		}
		s1++;
	}
	return (s1 - s);
}
