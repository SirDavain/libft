/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:03:47 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/08 11:41:57 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	//char	*first_occurence;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (s[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
int	main(void)
{
	const char	*s;
	int			c;

	s = "Hello";
	c = 'a';
	printf("%c", *ft_strchr(s, c));
}
