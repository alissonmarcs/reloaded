/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:02:59 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/13 18:12:15 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// #include <stdio.h>

// void opa(int n)
// {
// 	printf("%i\n", n);
// }

// int main()
// {
// 	int arr[] = {1, 2, 3, 4, 5};

// 	ft_foreach(arr, 5, opa);
// 	return (0);
// }
