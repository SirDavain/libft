/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:18:51 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/07 15:12:10 by dulrich          ###   ########.fr       */
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

void	*ft_calloc(size_t nmemb, size_t size)
{
	//difference: blocks of memory are initialized to zero
	//nmemb is the number of blocks & size is the size of them
	char	*p;

	p = ft_bzero()
	malloc();
	return (p);
}