/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfleisc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 13:17:33 by sfleisc           #+#    #+#             */
/*   Updated: 2018/07/11 13:20:37 by sfleisc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strspn(const char *s, const char *reject)
{
	const char	*s1 = s;
	const char	*s2;

	while (*s1)
	{
		s2 = reject;
		while (s1)
		{
			if (*s1 == *s2)
				break;
			else if (*s2++ == '\0')
				return (s1 - s);
		}
		s1++;
	}
	return (s1 - s);
}
