/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:10:20 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/11 10:12:58 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		fd = write(1, &s[i], 1);
		i++;
	}
	fd = write(1, "\n", 1);
}

/*int	main(void)
{
	char *s = "Hello";
	int	fd = 1;
	ft_putendl_fd(s, fd);
}*/