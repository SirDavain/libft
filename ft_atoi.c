/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:49:09 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/05 15:31:41 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;

	i = 0;
	/*while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	*/
	while (!(nptr[i] >= '0' && nptr[i] <= '9'))
		i++;
	result = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		//var for storing the value with shift10 operation
		result *= 10;
		result += nptr[i++];
	}
	return (result);
}

#include <stdio.h>
int	main(void)
{
	const char	*nptr = "   z1234u";
	int	result = ft_atoi(nptr);
	printf("%i", result);
}