/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_t_clean.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 15:35:26 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 19:39:26 by jdarko      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_tab_to_str(char **tab)
{
	int		l;
	int		c;
	int		i;
	char	*ret;

	l = 0;
	i = 0;
	if (!(ret = malloc(sizeof(char) * 10)))
		return (NULL);
	while (tab[l])
	{
		c = 0;
		while (tab[l][c])
		{
			if (tab[l][c] != '0')
				ret[i++] = tab[l][c];
			c++;
		}
		l++;
	}
	ret[i] = '\0';
	return (ret);
}

void	ft_put_0(char **tc)
{
	int	l;
	int	c;

	l = 0;
	c = 0;
	while (l < 4)
	{
		if ((ft_t_check_c(tc, c)) == 1)
			ft_t_set0c(tc, c);
		if ((ft_t_check_l(tc, l)) == 1)
			ft_t_set0l(tc, l);
		l++;
		c++;
	}
}

char	*ft_t_clean(char *t)
{
	char	**tc;
	int		l;
	int		c;
	int		i;

	l = 0;
	i = 0;
	if (!(tc = (char**)malloc(sizeof(char*) * 5)))
		return (NULL);
	while (l < 4)
	{
		c = 0;
		if (!(tc[l] = (char*)malloc(sizeof(char) * 6)))
			return (NULL);
		while (c < 5)
			tc[l][c++] = t[i++];
		tc[l++][c] = '\0';
	}
	tc[4] = NULL;
	if (!(ft_check_tetri(tc)))
		return (0);
	ft_put_0(tc);
	return (ft_tab_to_str(tc));
}
