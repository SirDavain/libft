/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:38:36 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/07 13:49:05 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int			i;
	int			j;
	const char	*big2;
	size_t		size;

	i = 0;
	if (little[i] == '\0')
		return (big);
	while (big[i] && i < len)
	{
		if (big[i] == little[i])
		{
			big2 = &big[i];
			size = len;
			j = 0;
			while (big2[j] == little[j++])
			{
				size--;
				if (little[j] == '\0' || size == 0)
					return (big[i]);
			}
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>
int	main(void)
{
	const char	*big = "Dinosaur";
	const char	*little = "no";
	size_t		len = 5;
	printf("%s", ft_strnstr(big, little, len));
}