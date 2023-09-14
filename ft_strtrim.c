/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:15:12 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/14 11:59:46 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		start;
	int		end;
	int		s1_len;
	int		s2_len;

	s1_len = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = s1_len - 1;
	while (start < end && ft_strchr(set, s1[end]))
		end--;
	s2_len = end - start + 1;
	s2 = (char *)malloc(s2_len * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1 + start, s2_len + 1);
	return (s2);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s1 = "parogipa";
	char	*set = "api";
	char	*result = ft_strtrim(s1, set);

	printf("%s", result);
}*/