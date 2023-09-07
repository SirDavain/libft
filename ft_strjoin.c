/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:38:33 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/07 13:16:37 by dulrich          ###   ########.fr       */
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

char	ft_strcpy(char *s)
{
	
}

char *ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		total_len;
	char	*s3;
	size_t	i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = (s1_len + s2_len) + 1;
	s3 = (char *)malloc((total_len) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (i < total_len)
	{
		s3[i] = 
	}
	s3[i] = '\0';
	return (s3);
}