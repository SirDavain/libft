/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:44:35 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/06 15:00:06 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*un_dest;
	unsigned char	*un_src;

	un_dest = (unsigned char *)dest;
	un_src = (unsigned char *)src;
	i = 0;
	while (un_src[i] && n)
	{
		un_dest[i] = un_src[i];
		i++;
		n--;
	}
	return (un_dest);
}

#include <stdio.h>
int main(void)
{
	unsigned char dest[50];
	unsigned char src[] = "Hello World";
	size_t n = 5;

	ft_memcpy(dest, src, n);
	printf("%s", dest);
}