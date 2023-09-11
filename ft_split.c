/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:26:31 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/11 16:20:26 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *s, int c)
{
	int	i;
	int	num_of_str;
	int	str_len;

	if (s == NULL)
		return (NULL);
	i = 0;
	num_of_str = 0;
	str_len = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			num_of_str++;
			if (s[i] + 1 == c)
				i++;
		}
		i++;
	}
	return (num_of_str);
}

static char	*ft_substr(char const *s, unsigned int start, size_t len)
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

static void	*array_maker()
{
	/*Get the substrings and put them into an array. Then 
	*/
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	int		i;
	int		num_of_splits;
	char	*x;


	num_of_splits = mod_ft_strchr(s, c);
	str_arr = (char **)malloc(num_of_splits + 1);
	if (!str_arr)
		return (NULL);
	i = 0;
	while (i < num_of_splits)
	{
		if ()
		x = (ft_strchr(s, c) - s)

		i++;
	}

	//end array with a null pointer
	//free memory if any of the new strings are NULL (apart from null pointer)
	return (*str_arr);
}

#include <stdio.h>
int main(void)
{
	char c = ',';
	char *s = "Hippo,po,ta,mus";
}