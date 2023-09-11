/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:14:51 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/11 13:16:47 by dulrich          ###   ########.fr       */
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

	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	length = ft_num_count(n);
	s = (char *)malloc((length + (sign == -1) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[0] = '\0';
	ft_fill_string(s, n, sign);
	ft_reverse(s);
	return (s);
}

/*#include <stdio.h>
int	main(void)
{
	int		n = -42;
	char	*result = ft_itoa(n);
	printf("%s", result);
}*/