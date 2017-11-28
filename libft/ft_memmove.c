/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 07:31:17 by brobicho          #+#    #+#             */
/*   Updated: 2017/11/13 07:32:24 by brobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dst_cpy;
	const char	*src_cpy;

	dst_cpy = dest;
	src_cpy = (char*)src;
	if (src_cpy == dst_cpy)
		return (dest);
	if (src_cpy < dst_cpy)
	{
		src_cpy = (char*)(src + n) - 1;
		dst_cpy = (dest + n) - 1;
		while (n--)
			*dst_cpy-- = *src_cpy--;
	}
	else
	{
		while (n)
		{
			*dst_cpy++ = *src_cpy++;
			n--;
		}
	}
	return (dest);
}
