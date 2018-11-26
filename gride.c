/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gride.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@1337.MA>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:43:08 by magoumi           #+#    #+#             */
/*   Updated: 2018/11/25 15:00:56 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**set_grid(void)
{
	char	**grid;
	int		i;

	i = 0;
	grid = malloc(sizeof(char *) * 16);
	while (i < 16)
	{
		grid[i] = malloc(16);
		grid[i] = ft_memset(grid[i], '$', 15);
		grid[i][15] = 0;
		i++;
	}
	return (grid);
}

void	init_grid(char **grid, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			grid[i][j] = '.';
			j++;
		}
		i++;
	}
}

void	print_grid(char **grid)
{
	int i;
	int j;

	i = 0;
	while (grid[i][0] != '$')
	{
		j = 0;
		while (grid[i][j] != '$')
			ft_putchar(grid[i][j++]);
		ft_putchar('\n');
		i++;
	}
}
