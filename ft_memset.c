/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:06:57 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/05 17:07:39 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n > i)
	{
		s = c;
		i++;
	}
}

int	main(void)
{
	char	*s;
	size_t	n;
	int		c;

	s = "Hi there";
	n = 3;
	c = '.';
	ft_memset(s, c, n);
}
