/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:18:17 by brobicho          #+#    #+#             */
/*   Updated: 2017/11/14 15:22:16 by brobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s || !f)
		return (NULL);
	if (!(res = malloc((sizeof(char) * ft_strlen(s) + 1))))
		return (NULL);
	while (*s)
		res[i++] = f(j++, *s++);
	res[i] = '\0';
	return (res);
}
