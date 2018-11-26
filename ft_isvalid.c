/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <othmanehachim@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 20:54:25 by ohachim           #+#    #+#             */
/*   Updated: 2018/11/25 14:58:55 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	ft_checktet(char *text)
{
	int cn;
	int touch;

	touch = 0;
	cn = 0;
	while (text[cn] != '\0')
	{
		if (text[cn] == '#')
		{
			if (text[cn + 1] == '#')
				touch++;
			if (text[cn + 5] == '#')
				touch++;
		}
		cn++;
	}
	if (touch >= 3)
		return (1);
	return (0);
}

static int	ft_checkp(char *text)
{
	int cn;
	int p;

	p = 0;
	cn = 0;
	while (text[cn] != '\0')
	{
		if (text[cn] == '.')
			p++;
		cn++;
	}
	if (p != 12)
		return (0);
	return (1);
}

static int	ft_checkhash(char *text)
{
	int cn;
	int h;

	h = 0;
	cn = 0;
	while (text[cn] != '\0')
	{
		if (text[cn] == '#')
			h++;
		cn++;
	}
	if (h != 4)
		return (0);
	return (1);
}

static int	ft_checkn(char *text)
{
	int cn;
	int n;
	int len;

	n = 0;
	cn = 0;
	len = 0;
	while (text[cn] != '\0')
	{
		if (text[cn] != '\n' && text[cn] != '#' && text[cn] != '.')
			return (0);
		if (text[cn] == '\n')
		{
			n++;
			if (len != 4)
				return (0);
			len = 0;
		}
		else
			len++;
		cn++;
	}
	if (n != 4)
		return (0);
	return (1);
}

int			ft_isvalid(char *tets)
{
	if (ft_checkn(tets) && ft_checkhash(tets) && ft_checkp(tets)
			&& ft_checktet(tets))
		return (1);
	return (0);
}
