/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispossible.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@1337.MA>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 14:59:25 by magoumi           #+#    #+#             */
/*   Updated: 2018/11/25 14:59:42 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_ispossible(int coor[4][2], char **board, int x, int y)
{
	int size;
	int i;
	int j;

	i = 0;
	j = 1;
	size = ft_strlenc(*board, '$');
	if (board[x][y] != '.')
		return (0);
	while (i < 4 && j < 4)
	{
		x = x + (coor[j][0] - coor[i][0]);
		y = y + (coor[j][1] - coor[i][1]);
		if (x >= size || y >= size || board[x][y] != '.' || x < 0 || y < 0)
			return (0);
		i++;
		j++;
	}
	return (1);
}
