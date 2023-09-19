/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:14:51 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/19 13:00:14 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	ft_num_count(int n)
{
	int	length;

	length = 1;
	while (n >= 10)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static void	ft_fill_string(char *s, int n, int sign)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		s[i] = '0' + (n % 10);
		n /= 10;
		i++;
	}
	if (sign < 0)
		s[i] = '-';
}

static void	ft_reverse(char *s)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}

char	*ft_itoa(int n)
{
	char	*s;
	int		sign;
	int		length;
	long	long_n;

	long_n = n;
	if (long_n == 0)
		return (ft_strdup("0"));
	length = ft_num_count(long_n) + 1;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		long_n = -long_n;
		s = (char *)malloc((length + 2) * sizeof(char));
	}
	else
		s = (char *)malloc(length * sizeof(char));
	if (!s)
		return (NULL);
	ft_fill_string(s, long_n, sign);
	ft_reverse(s);
	s[length + 1] = '\0';
	return (s);
}

#include <stdio.h>
int	main(void)
{
	int		n = -3;
	char	*result = ft_itoa(n);
	printf("%s", result);
	free(result);
	return (0);
}