/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placenreplace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <othmanehachim@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:06:45 by ohachim           #+#    #+#             */
/*   Updated: 2018/11/25 15:04:53 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_placenreplace(t_tet *tets, char **board, int size, int y)
{
	int x;
	int i;

	x = -1;
	i = 0;
	while (++x < size)
	{
		y = -1;
		while (++y < size)
		{
			if (ft_ispossible(tets[i].coor, board, x, y))
			{
				board = ft_place(tets[i], board, x, y);
				if (tets[i + 1].l != '$')
				{
					if (ft_placenreplace(&tets[i + 1], board, size, -1))
						return (1);
				}
				else
					return (1);
			}
			board = ft_reset(tets[i].l, board);
		}
	}
	return (0);
}
