/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: brobicho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/07 16:21:28 by brobicho     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/07 16:21:51 by brobicho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
	int		fd;
	int		flag;
	char	*line;

	fd = 0;
	flag = 1;
	if (ac == 1)
	{
		get_next_line(fd, &line);
		printf("%s", line);
	}
	else
	{
		fd = open(av[1], O_RDONLY);
		while (flag)
		{
			flag = get_next_line(fd, &line);
			printf("%s\n", line);
		}
		close(fd);
	}
}
