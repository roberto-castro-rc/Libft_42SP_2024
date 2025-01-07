/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulo-c <rpaulo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:34:47 by rpaulo-c          #+#    #+#             */
/*   Updated: 2024/12/19 16:36:16 by rpaulo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*c_dst;
	unsigned char	*c_src;
	size_t			i;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	i = 0;
	if (c_dst < c_src)
	{
		while (i < n)
		{
			c_dst[i] = c_src[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			c_dst[n] = c_src[n];
	}
	return (dst);
}
