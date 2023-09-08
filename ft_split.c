/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:26:31 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/08 14:43:11 by dulrich          ###   ########.fr       */
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

void	*array_maker()
{
	/*
	*/
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	int		i;
	char	*tmp_str;

	
	tmp_str = ft_substr(s, )

	/*search for all instances of the delimiter and split the string
	along them into separate ones.
	Use strdup to put the new strings into the **str_arr
	Use substr to get the new string and allocate memory for it

	Find the first delim and replace it with a NULL. Then repeat until there's
	no more of them. Then use 
	*/

	return (*str_arr);
}

#include <stdio.h>
int main(void)
{
	char c = ',';
	char *s = "Hippo,po,ta,mus";
}