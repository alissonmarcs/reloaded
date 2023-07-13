/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:14:12 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/13 15:30:30 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	tmp;

// 	tmp = ft_iterative_factorial(4);
// 	printf("%d\n", tmp);
// 	return (0);
// }
