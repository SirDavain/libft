/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:38:36 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/05 16:07:23 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	if (*little == '\0')
		return (big);
	i = 0;
	while (big[i] && len)
	{
		if (big[i] == little[i])
		{
			j = i;
			while ()
		}
		i++;
		len--;
	}
}

#include <stdio.h>
int	main(void)
{
	const char	*big = "Dinosaur";
	const char	*little = "no";
	size_t		len = 5;
	printf("%s", ft_strnstr(big, little, len));
}