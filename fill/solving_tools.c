/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   solving_tools.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 15:38:58 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 23:31:23 by jdarko      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_initab(int s)
{
	char	**tab;
	int		i;

	i = 0;
	if (!(tab = ft_memalloc((sizeof(tab) * (s + 1)))))
		return (NULL);
	while (i < s)
	{
		tab[i] = ft_memalloc(s + 2);
		ft_memset(tab[i], '.', s);
		tab[i][s] = '\n';
		tab[i][s + 1] = '\0';
		i++;
	}
	return (tab);
}

int		ft_cmptmap(char **tab, char *str, t_coord *coord)
{
	int		i;
	int		j;
	int		k;

	i = coord->x;
	k = -1;
	while (str[++k] && tab[i])
	{
		j = coord->y;
		while (str[k] != '\n' && tab[i][j])
		{
			if (tab[i][j] == '.' || str[k] == '.')
				k++;
			else
				return (0);
			j++;
		}
		if (str[k] == '\n' && !str[k + 1] && !tab[i + 1])
			return (1);
		if (str[k] == '\n')
			i++;
	}
	if (!tab[i] && str[k] != '\n')
		return (0);
	return (1);
}

void	ft_fill(char **tab, char *str, t_coord *coord, char c)
{
	int		k;
	int		i;
	int		j;

	k = 0;
	i = coord->x;
	while (str[k] && tab[i])
	{
		j = coord->y;
		while (str[k] != '\n' && tab[i][j])
		{
			if (str[k] == '#' && tab[i][j] == '.')
				tab[i][j] = c;
			k++;
			j++;
		}
		if (str[k] == '\n')
			i++;
		k++;
	}
}

void	ft_clear(char **tab, char *str, t_coord *coord)
{
	int		k;
	int		i;
	int		j;

	k = 0;
	i = coord->x;
	k = 0;
	while (str[k] && tab[i])
	{
		j = coord->y;
		while (str[k] != '\n' && tab[i][j])
		{
			if (str[k] == '#' && tab[i][j] != '\n')
				tab[i][j] = '.';
			k++;
			j++;
		}
		if (str[k] == '\n')
			i++;
		k++;
	}
}

void	ft_printtab(char **str)
{
	int		i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		ft_putstr(str[i]);
		free(str[i]);
		i++;
	}
}
