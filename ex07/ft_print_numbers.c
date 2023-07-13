/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:07:14 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/10 18:14:27 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
		ft_putchar(c++);
}

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int main()
// {
// 	ft_print_numbers();
// 	return (0);
// }
