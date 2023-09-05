/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:46:56 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/05 13:06:26 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	
	i = 0;
	while (src[i] && size - 1)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	return (src);
}

#include <stdio.h>
int	main(void)
{
	char		*dst;
	const char	*src = "hi there";
	size_t		size = 4;

	printf("%zu", ft_strlcpy(dst, src, size));
}
