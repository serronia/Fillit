/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 16:28:17 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 18:44:56 by jdarko      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

# define Y	xy->y
# define X	xy->x

typedef struct	s_tkind
{
	int			x;
	char		a;
	int			max;
}				t_tkind;

typedef struct	s_coord
{
	int			x;
	int			y;
}				t_coord;

int				ft_t_check_l(char **t, int l);
void			ft_t_set0c(char **t, int c);
int				ft_t_check_c(char **t, int c);
void			ft_t_set0l(char **t, int l);
int				ft_check_tetri(char **tc);
char			**ft_bdd_t(void);
int				check_buf(char *str);
char			*ft_t_clean(char *t);
int				tcmp(char **bdd, char *str);
char			*ft_strdup(char *src);
void			*ft_memalloc(size_t size);
void			reader(int fd, char **bdd, int *i, t_tkind **t);
t_tkind			*ft_stock(int x, int i, int max);
void			ft_printtab(char **str);
void			ft_fill(char **t, char *str, t_coord *coord, char c);
char			**ft_initab(int s);
int				ft_cmptmap(char **tab, char *str, t_coord *coord);
void			presolver(t_tkind **t, int i);
int				solver(char **tab, t_tkind **t, int p, char **bdd);
void			ft_clear(char **tab, char *str, t_coord *xy);
int				ft_sqrt(int i);
int				checknl(char *str);
void			ft_quit(void);

#endif
