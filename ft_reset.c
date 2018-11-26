/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 00:35:02 by ohachim           #+#    #+#             */
/*   Updated: 2018/11/25 15:02:03 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_reset(char l, char **board)
{
	int i;
	int j;
	int size;

	i = 0;
	size = (int)ft_strlenc(*board, '$');
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (board[i][j] == l)
				board[i][j] = '.';
			j++;
		}
		i++;
	}
	return (board);
}
