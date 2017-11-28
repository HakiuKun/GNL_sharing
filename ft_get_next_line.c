/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_get_next_line.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: brobicho <brobicho@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 15:17:35 by brobicho     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/28 17:09:52 by brobicho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

int		get_next_line(const ind fd, char **line)
{
	int i;
	static char *copy;
	int ret;
	char buff[BUFF_SIZE + 1];

	if (fd < 0)
		return (-1);
	i = 0;
	if (!copy)
	{
		copy = (char*)malloc(BUFF_SIZE);
		if (!((ret = read(fd, save, BUFF_SIZE)) < 1))
			return (0);


