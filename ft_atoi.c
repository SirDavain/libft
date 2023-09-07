/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:49:09 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/07 09:21:40 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	sign = 1;
	if (nptr[i++] == '-')
		sign = -1;
	result = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result += nptr[i++] - 48;
	}
	return (result * sign);
}

/*#include <stdio.h>
int	main(void)
{
	const char	*nptr = "	 -1234u";
	int	result = ft_atoi(nptr);
	int alt_result = atoi(nptr);
	printf("%d\n", result);
	printf("%d", alt_result);
}*/