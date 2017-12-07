/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: brobicho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/05 14:17:44 by brobicho     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/05 14:17:46 by brobicho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

int		get_next_line(int fd, char **line)
{
	char buff[8];
	char *str;
	static int i;
	int j;
	int k;

	i = 0;
	k = 0;
	fd = open(line[i], O_RDONLY);
	str = (char*)malloc(sizeof(char) * j + 1);
	while (read(fd, &buff, ft_strlen(buff) + 1) && str[k] != '\n' && str[k])
	{
		str = (char*)malloc(sizeof(char) * j + 1);
		str = line[i];
		printf("%s\n", line[i]);
		k++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	char	**test;
	int		i;
	int		j;

	i = 0;
	j = 0;
	test = ft_strsplit(av[1], ' ');
	get_next_line(1, test);
}
