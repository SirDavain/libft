/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:50:34 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/07 12:37:20 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	substr = (char *)malloc((len - 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < start)
		i++;
	j = 0;
	while (s[i] && j < len - 1)
	{
		substr[j] = s[i];
		j++;
		i++;
	}
	substr[j] = '\0';
	return (substr);
}

/*#include <stdio.h>
int	main(void)
{
	char const	*s = "Hello world";
	unsigned int start = 2;
	size_t 		len = 3;
	char		*result;

	result = ft_substr(s, start, len);
	printf("%s", result);

	free(result);
	return (0);
}*/