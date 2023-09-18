/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:30:01 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/18 12:18:03 by dulrich          ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*s;

	s = src;
	i = 0;
	while (i < size && dst[i])
		i++;
	j = 0;
	while (s[j] && i + 1 < size)
	{
		dst[i] = s[j];
		i++;
		j++;
	}
	if (i < size)
		dst[i] = '\0';
	return (ft_strlen(src) + ft_strlen(dst));
}

// int main(void)
// {
// 	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char buff[0xF00] = "there is no stars in the sky";
// 	size_t max = ft_strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
// 	ft_strlcat(buff, str, max);
// }