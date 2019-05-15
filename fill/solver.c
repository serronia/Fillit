/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   solver.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 15:35:26 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/04 13:37:04 by mimignot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	presolver(t_tkind **t, int i)
{
	int		j;
	char	**tab;
	char	**bdd;

	bdd = ft_bdd_t();
	j = ft_sqrt(i * 4);
	tab = ft_initab(j);
	t[0]->max = j;
	while (solver(tab, t, 0, bdd) != 1)
	{
		j++;
		t[0]->max = j;
		free(tab);
		tab = ft_initab(j);
	}
	ft_printtab(tab);
	free(tab);
}

int		solver(char **tab, t_tkind **t, int p, char **bdd)
{
	t_coord		*xy;

	if (t[p]->x == -1)
		return (1);
	if (!(xy = malloc(sizeof(xy))))
		return (0);
	X = -1;
	while (++X < t[0]->max)
	{
		Y = -1;
		while ((++Y < t[0]->max))
		{
			if (ft_cmptmap(tab, bdd[t[p]->x], xy))
			{
				ft_fill(tab, bdd[t[p]->x], xy, t[p]->a);
				if (solver(tab, t, p + 1, bdd))
					return (1);
				ft_clear(tab, bdd[t[p]->x], xy);
			}
		}
	}
	free(xy);
	return (0);
}
