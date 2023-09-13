/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:42:59 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/13 16:47:13 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	fd = write(1, &c, 1);
}

/*int	main(void)
{
	char c = 'd';
	int	fd = 1;
	ft_putchar_fd(c, fd);
}*/