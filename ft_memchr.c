/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:26:07 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/06 15:08:36 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	un_c;
	unsigned char	*x;
	int				i;

	x = (unsigned char *)s;
	un_c = (unsigned char)c;
	i = 0;
	while (x[i] && n > i)
	{
		if (un_c == x[i])
			return ((void *)x[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
int main(void)
{
	unsigned char	src[] = "Hello World";
	int				c = 'e';
	size_t n = 5;

	printf("%c", ft_memchr(src, c, n));
}