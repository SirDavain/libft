/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:03:47 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/13 10:21:39 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	const char	*s;
	int			c;
	char		*result;

	s = "Hello";
	c = 'e';
	result = ft_strchr(s, c);

	if (result != NULL)
		printf("%c", *result);
	else
		printf("Char not found.\n");
}*/
