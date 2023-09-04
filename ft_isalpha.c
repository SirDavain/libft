/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:44:44 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/04 16:52:20 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
}

int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
}

int	ft_isalpha(int c)
{
	if (ft_isupper || ft_islower)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int main(void)
{
    int c;

    c = 'h';
    printf("%i", ft_isalpha(c));
}*/
