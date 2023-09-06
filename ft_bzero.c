/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:37:23 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/06 10:42:33 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*x;

	x = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		x[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>
int main(void)
{
	char	s[] = "Welcome";
	size_t	n = 3;
	
	ft_bzero((void *)s, n);
	printf("%c", *(s + 6));
}*/