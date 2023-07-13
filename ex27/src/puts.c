/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:29:03 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/13 18:14:20 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

void	ft_putchar(int channel, char c)
{
	write(channel, &c, 1);
}

void	ft_putstr(int channel, char *str)
{
	while (*str != '\0')
	{
		ft_putchar(channel, *str);
		str++;
	}
}
