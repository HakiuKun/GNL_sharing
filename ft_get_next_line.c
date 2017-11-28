/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_get_next_line.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: brobicho <brobicho@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 15:17:35 by brobicho     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/28 16:09:37 by brobicho    ###    #+. /#+    ###.fr     */
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
	char buff[BUFF_SIZE];

	i = 0;
	while ()
	read(fd, &buff, 1);

