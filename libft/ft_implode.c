/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_implode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@1337.MA>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:58:37 by magoumi           #+#    #+#             */
/*   Updated: 2018/10/25 11:00:42 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_implode(char separateur, char **ary)
{
	int		i;
	int		j;
	char	*str;
	char	*ret;

	if (NULL == (str = (char*)malloc(ft_arylen(ary) + 1)))
		return (NULL);
	i = 0;
	ret = str;
	while (ary[i])
	{
		j = 0;
		while (ary[i][j])
		{
			*str++ = ary[i][j];
			j++;
		}
		if (ary[i + 1])
			*str++ = separateur;
		i++;
	}
	*str = '\0';
	return (ret);
}
