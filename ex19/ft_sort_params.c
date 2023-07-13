/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:02:01 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/13 15:36:11 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_swap_ptr(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0' || *s1 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char *argv[])
{
	int	index1;
	int	index2;

	index1 = 1;
	while (index1 < argc)
	{
		index2 = 1;
		while (index2 < argc)
		{
			if (ft_strcmp(argv[index1], argv[index2]) < 0)
				ft_swap_ptr(&argv[index1], &argv[index2]);
			index2++;
		}
		index1++;
	}
	index1 = 1;
	while (index1 < argc)
	{
		ft_putstr(argv[index1++]);
		ft_putstr("\n");
	}
	return (0);
}
