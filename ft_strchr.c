/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:03:47 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/04 17:53:46 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (s[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	const char	*s;
	int			c;

	s = "Hello";
	c = 'e';
	printf("%d", ft_strchr(*s, c));
}
