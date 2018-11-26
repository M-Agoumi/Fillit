/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <othmanehachim@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:55:16 by ohachim           #+#    #+#             */
/*   Updated: 2018/11/25 15:03:43 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_tet	ft_tetr(t_tet tets, char *t, int i)
{
	int		x;
	int		s;
	char	**teto;
	int		y;

	s = 0;
	x = 0;
	tets.l = i + 65;
	teto = ft_strsplit(t, '\n');
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			if (teto[x][y] == '#')
			{
				tets.coor[s][0] = x;
				tets.coor[s][1] = y;
				s++;
			}
			y++;
		}
		x++;
	}
	return (tets);
}
