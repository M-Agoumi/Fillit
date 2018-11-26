/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 00:15:35 by ohachim           #+#    #+#             */
/*   Updated: 2018/11/25 15:01:24 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_place(t_tet tets, char **board, int x, int y)
{
	int i;
	int j;
	int size;

	size = ft_strlenc(*board, '$');
	i = 0;
	j = 1;
	board[x][y] = tets.l;
	while (i < 4 && j < 4)
	{
		x = x + (tets.coor[j][0] - tets.coor[i][0]);
		y = y + (tets.coor[j][1] - tets.coor[i][1]);
		board[x][y] = tets.l;
		i++;
		j++;
	}
	return (board);
}
