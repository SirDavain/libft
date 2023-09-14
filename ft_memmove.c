/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:01:58 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/14 11:56:23 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*un_dest;
	unsigned char	*un_src;
	size_t			i;

	un_dest = (unsigned char *)dest;
	un_src = (unsigned char *)src;
	if (un_dest > un_src && un_src + n > un_dest)
	{
		i = n;
		while (i)
		{
			*(un_dest + i) = *(un_src + i);
			i--;
		}
		return ((void *)un_dest);
	}
	else
	{
		i = 0;
		while (n > i)
		{
			*(un_dest + i) = *(un_src + i);
			i++;
		}
		return ((void *)un_dest);
	}
}

#include <stdio.h>
int main(void)
{
	unsigned char dest[50];
	unsigned char src[] = "Hello World";
	size_t n = 5;

	ft_memmove(dest, src, n);
	printf("%s", dest);
}