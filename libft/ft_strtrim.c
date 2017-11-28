/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:44:47 by brobicho          #+#    #+#             */
/*   Updated: 2017/11/15 16:57:28 by brobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*res;
	int				i;
	unsigned long	start;
	int				end;

	start = 0;
	if (!s || !(res = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	ft_strcpy(res, (char*)s);
	i = -1;
	while (res[++i] == '\n' || res[i] == '\t' || res[i] == ' ')
		start++;
	if (ft_strlen(res) == start)
		return ((char *)ft_memset(res, 0, ft_strlen(res)));
	i = ft_strlen(res);
	end = 0;
	while (res[--i] == '\n' || res[i] == '\t' || res[i] == ' ')
		end++;
	i = ft_strlen(s) - end - start;
	res = ft_strsub(res, start, i);
	return (res);
}
