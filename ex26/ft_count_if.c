/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:21:52 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/12 18:30:58 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char *tab[], int (*f)(char *))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

// int	ft_func(char *c)
// {
// 	if (*c == '1')
// 		return (1);
// 	return (0);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char *arr[3] = {"alisson", "1", "serafim"};
// 	int		count;

// 	count = ft_count_if(arr, ft_func);
// 	printf("%d\n", count);
// 	return (0);
// }
