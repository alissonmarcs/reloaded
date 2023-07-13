/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:36:56 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/13 15:38:26 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new_string;

	i = 0;
	new_string = (char *)malloc(ft_strlen(src) + 1);
	while (src[i])
	{
		new_string[i] = src[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

// #include <stdio.h>

// int main()
// {
// 	char *ptr;

// 	ptr = ft_strdup("neponuceno neponuceno e alisson marcos");
// 	printf("%s\n", ptr);
// 	free(ptr);
// 	return (0);
// }
