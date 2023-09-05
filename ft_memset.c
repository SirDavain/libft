/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:06:57 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/05 15:12:06 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *s, int c, size_t n)
{
	while (n && (void *)s)
	{
		(char *)s = c;
		s++;
		n--;
	}
	return ((void *)s);
}

int	main(void)
{
	char	*s;
	size_t	n;
	int		c;

	s = "Hi there";
	n = 3;
	c = '.';
	ft_memset(s, c, n);
}
