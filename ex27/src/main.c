/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:22:05 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/13 18:14:10 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		ft_putstr(2, "File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
