/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:15:04 by ajearuth          #+#    #+#             */
/*   Updated: 2022/01/06 12:39:00 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


int	error_message(int i)
{
	if (i == 1)
		ft_putstr_fd("Error\n Map must be surrounded by walls", 2);
	if (i == 2)
		ft_putstr_fd("Error\n Map must have at least one exit", 2);
	if (i == 3)
		ft_putstr_fd("Error\n Map must have at least one collectible", 2);
	if (i == 4)
		ft_putstr_fd("Error\n Map must have one starting position", 2);
	if (i == 5)
		ft_putstr_fd("Error\n Map must be rectangular", 2);
	return (-1);
}

int		check_size(t_map map)
{
	int i;

	i = 0;
	while(map.map[i])
	{
		if(ft_strlen(map.map[i]) != map.width)
			return (error_message(5));
	}
	if (i != map.lengh)
		return (error_message(5));
	if (map.lengh == map width)
		return (error_message(5));
	return (0);
}



int	check_walls(char *line, t_map map)
{
	int i;

	i = 0;

	while(line[i
}
