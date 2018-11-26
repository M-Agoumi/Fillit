/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@1337.MA>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:15:47 by magoumi           #+#    #+#             */
/*   Updated: 2018/11/25 14:57:33 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	ft_gridsize(int size)
{
	int n;

	n = 0;
	while (n * n < (size * 4))
		n++;
	return (n);
}

void		fillit(char *file)
{
	char	**board;
	t_tet	*test;
	int		size;

	size = 0;
	if (!(test = ft_opend(file_open(file), 0)))
	{
		ft_putstr("error\n");
		exit(0);
	}
	else
	{
		while (test[size].l != '$')
			size++;
		size = ft_gridsize(size);
		board = set_grid();
		init_grid(board, size);
		while (ft_placenreplace(test, board, size, -1) == 0)
		{
			size++;
			init_grid(board, size);
		}
		print_grid(board);
	}
}
