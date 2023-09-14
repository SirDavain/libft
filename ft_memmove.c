/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:01:58 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/14 12:17:13 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	if ((unsigned char *)dest > (unsigned char *)src
		&& (unsigned char *)src + n > (unsigned char *)dest)
	{
		i = n;
		while (i)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i--;
		}
		return ((void *)dest);
	}
	else
	{
		i = 0;
		while (n > i)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
		return ((void *)dest);
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	unsigned char dest[50];
// 	unsigned char src[] = "Hello World";
// 	size_t n = 5;

// 	ft_memmove(dest, src, n);
// 	printf("%s", dest);
// }