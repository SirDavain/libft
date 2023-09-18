/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:53:47 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/18 11:04:49 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	size_t			i;
// 	unsigned char	*un_s1;
// 	unsigned char	*un_s2;

// 	un_s1 = (unsigned char *)s1;
// 	un_s2 = (unsigned char *)s2;
// 	if (n == 0)
// 		return (0);
// 	if (ft_strlen(s1) > n)
// 		n = ft_strlen(s1);
// 	if (ft_strlen(s2) > n)
// 		n = ft_strlen(s2);
// 	i = 0;
// 	while (un_s1[i] == un_s2[i] && n > i)
// 		i++;
// 	if (un_s1[i] > un_s2[i])
// 		return (1);
// 	else if (un_s1[i] < un_s2[i])
// 		return (-1);
// 	else
// 		return (0);
// }

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*un_s1;
	unsigned char	*un_s2;

	un_s1 = (unsigned char *)s1;
	un_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (un_s1[i] == un_s2[i] && n > i && un_s1[i] && un_s2[i])
		i++;
	if (un_s1[i] > un_s2[i])
		return (1);
	else if (un_s1[i] < un_s2[i])
		return (-1);
	else
		return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *s1 = "atoms\0\0\0\0";
// 	char *s2 = "atoms\0abc";
// 	int	result;
// 	result = ft_memcmp(s1, s2, 20);
// 	printf("%i", result);
// }