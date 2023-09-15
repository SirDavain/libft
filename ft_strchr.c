/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:03:47 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/15 11:57:34 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char		*src = "He \0 llo";
// 	char		*test = ft_strchr(src, '\0');

// 	if (test != NULL)
// 		printf("%c", *test);
// 	else
// 		printf("Char not found.\n");
// }
