/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:19:23 by almarcos          #+#    #+#             */
/*   Updated: 2023/07/13 18:16:56 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <fcntl.h>
# include <unistd.h>

void	ft_putchar(int channel, char c);
void	ft_putstr(int channel, char *str);
void	ft_display_file(char *filename);

#endif
