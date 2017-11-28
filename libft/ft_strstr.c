/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:41:12 by brobicho          #+#    #+#             */
/*   Updated: 2017/11/13 18:53:53 by brobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	pos;
	size_t			len;

	i = 0;
	len = ft_strlen(needle);
	if (len == 0)
		return ((char*)haystack);
	while (haystack[i])
	{
		pos = 0;
		while (needle[pos] == haystack[pos + i])
		{
			if (pos == (len - 1))
				return ((char*)haystack + i);
			pos++;
		}
		i++;
	}
	return (NULL);
}
