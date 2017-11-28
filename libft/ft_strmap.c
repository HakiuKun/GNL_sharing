/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:18:17 by brobicho          #+#    #+#             */
/*   Updated: 2017/11/14 14:10:43 by brobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(res = malloc((sizeof(char) * ft_strlen(s) + 1))))
		return (NULL);
	while (*s)
		res[i++] = f(*s++);
	res[i] = '\0';
	return (res);
}
