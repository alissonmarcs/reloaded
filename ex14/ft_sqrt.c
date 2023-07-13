/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:54:02 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/13 15:31:38 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (0);
	while (result * result < nb)
		result++;
	if (result == 46341)
		return (0);
	if (result * result == nb)
		return (result);
	else
		return (0);
}

// int	main(void)
// {
// 	int	tmp;

// 	tmp = ft_sqrt(3);
// 	printf("%d\n", tmp);
// 	return (0);
// }
