/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:01:58 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/06 12:29:54 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	tmp_arr[100];
	unsigned char	*un_dest;
	unsigned char	*un_src;
	int				i;

	un_dest = (unsigned char *)dest;
	un_src = (unsigned char *)src;
	i = 0;
	
	/*two while loops: one for if it is not overlapping --> normally copy
	the other one for if it is overlapping -> calc length of the src and copy backwards
	with length--*/
	while (un_src[i] && n > i)
	{
		tmp_arr[i] = un_src[i];
		un_dest[i] = tmp_arr[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
int main(void)
{
	unsigned char dest[50];
	unsigned char src[11] = "Hello World";
	size_t n = 5;

	*ft_memmove(dest, src, n);
	printf("%s", dest);
}