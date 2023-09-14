/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:11:28 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/14 14:07:25 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (c == s[i])
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	const char	*s;
// 	int			c;
// 	char		*result;

// 	s = "Hello";
// 	c = 'H';
// 	result = ft_strrchr(s, c);

// 	if (result != NULL)
// 		printf("%c", *result);
// 	else
// 		printf("Char not found.\n");
// }