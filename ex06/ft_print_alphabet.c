/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:20:09 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/10 18:07:24 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
		ft_putchar(c++);
}

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int main()
// {
// 	ft_print_alphabet();
// 	return (0);
// }
