/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:14:51 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/11 11:50:13 by dulrich          ###   ########.fr       */
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

void	ft_reverse(char *s)
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

/*char	*ft_itoa(int n)
{
	char	*s;
	int		sign;
	int		i;

	sign = n;
	if (sign < 0)
		n *= -1;
	i = 0;
	while (n > 0)
	{
		s[i] = n % 10;
		n /= 10;
		i++;
	}
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	ft_reverse(s);
	s = malloc(ft_strlen(s) * sizeof(char));
	if (!s)
		return (NULL);
	return (s);
}*/

char	*ft_itoa(int n)
{
	char	*s;
	int		sign;
	int		i;
	int		length;
	int		tmp;

	sign = 1;
	if (sign < 0)
	{
		sign = -1;
		n = -n;
	}
	length = 1;
	tmp = n;
	while (n >= 10)
	{
		tmp /= 10;
		length++;
	}
	s = (char *)malloc((length + 1) * sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	while (n > 0)
	{
		s[i] = n % 10;
		n /= 10;
		i++;
	}
	if (sign < 0)
		s[i++] = '-';
	ft_reverse(s);
	return (s);
}

#include <stdio.h>
int	main(void)
{
	int		n = 42;
	char	*result = ft_itoa(n);
	printf("%s", result);
}