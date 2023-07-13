/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:49:22 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/13 18:44:09 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*arr;
	int	i;

	i = 0;
	if (min > max || min == max)
		return (NULL);
	range = max - min;
	arr = (int *)malloc(sizeof(int) * range);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*tmp;
// 	int	i;

// 	tmp = ft_range(20, 39);
// 	i = 0;
// 	while (i < 19)
// 		printf("%i\n", tmp[i++]);
// 	free(tmp);
// 	return (0);
// }
