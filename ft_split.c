/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:26:31 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/14 13:48:43 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *s, int c)
{
	int	i;
	int	num_of_str;

	if (!s)
		return (0);
	i = 0;
	num_of_str = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			num_of_str++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (num_of_str);
}

static void	ft_free_split(char **s)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static char	*ft_get_next_substr(const char **s, char c)
{
	const char	*start;
	const char	*end;

	start = *s;
	end = start;
	while (*end && *end != c)
		end++;
	if (*end)
		*s = end + 1;
	else
		*s = end;
	return (ft_substr(start, 0, end - start));
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	int		i;
	int		num_of_str;

	if (!s)
		return (NULL);
	num_of_str = ft_count(s, c);
	str_arr = (char **)malloc((num_of_str + 1) * sizeof(char *));
	if (!str_arr)
		return (NULL);
	i = 0;
	while (num_of_str > 0)
	{
		str_arr[i] = ft_get_next_substr(&s, c);
		if (!str_arr[i])
		{
			ft_free_split(str_arr);
			return (NULL);
		}
		i++;
		num_of_str--;
	}
	str_arr[i] = NULL;
	return (str_arr);
}

// char	**ft_split(char const *s, char c)
// {
// 	char	**str_arr;
// 	int		i;
// 	int		num_of_str;
// 	int		substr_len;

// 	if (!s)
// 		return (NULL);
// 	num_of_str = ft_count(s, c);
// 	str_arr = (char **)malloc((num_of_str + 1) * sizeof(char *));
// 	if (!str_arr)
// 		return (NULL);
// 	i = 0;
// 	while (num_of_str > 0)
// 	{
// 		while (*s && *s == c)
// 			s++;
// 		substr_len = 0;
// 		while (s[substr_len] && s[substr_len] != c)
// 			substr_len++;
// 		str_arr[i] = ft_substr(s, 0, substr_len);
// 		if (!str_arr[i])
// 		{
// 			ft_free_split(str_arr);
// 			return (NULL);
// 		}
// 		s += substr_len;
// 		i++;
// 		num_of_str--;
// 	}
// 	str_arr[i] = NULL;
// 	return (str_arr);
// }

// #include <stdio.h>
// int main(void)
// {
// 	char c = ',';
// 	char *s = ",,Hippo,,,,po,ta,mus,,";
// 	char **result;

// 	result = ft_split(s, c);
// 	int i = 0;
// 	while (result[i])
// 	{
// 		printf("%s", result[i]);
// 		i++;
// 	}
// 	ft_free_split(result);
// 	return (0);
// }