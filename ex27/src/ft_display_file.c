/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:55:33 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/13 18:13:39 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

void	ft_display_file(char *filename)
{
	int		fd;
	int		nbytes;
	char	buff[1];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return ;
	nbytes = 1;
	while (nbytes)
	{
		nbytes = read(fd, buff, 1);
		if (nbytes == 1)
			ft_putchar(1, buff[0]);
	}
	close(fd);
}
