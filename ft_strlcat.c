/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <dulrich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:30:01 by dulrich           #+#    #+#             */
/*   Updated: 2023/09/05 14:48:55 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;
	int	dst_len;
	int	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j] && size - ft_strlen(dst) - 1)
	{
		dst[i++] = src[j++];
		size--;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}