/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:03:47 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/04 17:47:24 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_*strchr(const char *s, int c)
{
	while (*s)
	{
		if (c == s)
			return (s);
		s++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char	*s;
	int		c;

	s = "Hello";
	c = 'e';
	printf("%d", ft_strchr(*s, c));
}
