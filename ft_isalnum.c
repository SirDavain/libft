/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:42:40 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/04 13:59:16 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isalpha.c"
#include "ft_isdigit.c"

int ft_isalnum(int c)
{
    if (isalpha(c) || isdigit(c))
        return (1);
    else
        return (0);
}