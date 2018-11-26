/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@1337.MA>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 10:47:00 by magoumi           #+#    #+#             */
/*   Updated: 2018/11/25 15:08:19 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define BUFF_SIZE 20
# include "libft/libft.h"
# include <unistd.h>
# include <fcntl.h>

typedef struct		s_tet
{
	char			l;
	int				coor[4][2];
}					t_tet;

t_tet				ft_tetr(t_tet tets, char *t, int i);
char				**set_grid(void);
void				fillit(char *file);
int					ft_isvalid(char *file);
int					file_open(char *file);
int					ft_placenreplace(t_tet *tets, char **board, int size,
		int y);
t_tet				*ft_opend(int fd, int i);
int					ft_ispossible(int coor[4][2], char **board, int x, int y);
char				**ft_place(t_tet tets, char **board, int x, int y);
char				**set_grid(void);
void				init_grid(char **grid, int size);
void				print_grid(char **grid);
char				**ft_reset(char l, char **board);

#endif
