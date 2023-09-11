/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:58:48 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/11 10:09:58 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		fd = write(1, &s[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char *s = "Hello";
	int	fd = 1;
	ft_putstr_fd(s, fd);
}*/