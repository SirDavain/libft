/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:11:28 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/05 12:42:03 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strrchr(const char *s, int c)
{
    int	i;

	i = ft_strlen(s);
	while (s[i--])
	{
		if (c == s[i])
			return (s[i]);
	}
	return (NULL);
}

#include <stdio.h>
int main(void)
{
    const char  *s = "hello";
    int         c = 'e';
    printf("%c", ft_strrchr(s, c));
}