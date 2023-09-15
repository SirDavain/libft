/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:22:44 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/15 10:56:42 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*un_s1;
	unsigned char	*un_s2;

	un_s1 = (unsigned char *)s1;
	un_s2 = (unsigned char *)s2;
	i = 0;
	if (*un_s1 && *un_s2)
	{
		while (un_s1[i] == un_s2[i] && n > i)
			i++;
		if (un_s1[i] > un_s2[i])
			return (1);
		else if (un_s1[i] < un_s2[i])
			return (-1);
		else
			return (0);
	}
	return (0);
}
