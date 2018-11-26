/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opend.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <othmanehachim@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:52:55 by ohachim           #+#    #+#             */
/*   Updated: 2018/11/25 15:03:11 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_tet	*ft_opend(int fd, int i)
{
	t_tet	*tets;
	int		ret;
	char	tet[BUFF_SIZE + 1];

	tets = (t_tet *)malloc(sizeof(t_tet) * 26 + 1);
	while ((ret = read(fd, tet, BUFF_SIZE)))
	{
		if (ret == -1)
			return (0);
		tet[ret] = '\0';
		if (!ft_isvalid(tet))
			return (0);
		tets[i] = ft_tetr(tets[i], tet, i);
		if (++i > 26)
			return (0);
		ret = read(fd, tet, 1);
		tet[ret] = '\0';
		if (tet[0] != '\n' && tet[0] != '\0')
			return (0);
	}
	if (i == 0 || tet[0] == '\n')
		return (0);
	tets[i].l = '$';
	return (tets);
}
