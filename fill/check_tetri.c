/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check_tetri.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 15:34:35 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 23:31:28 by jdarko      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_tetri(char **tc)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (tc[i])
	{
		j = 0;
		while (tc[i][j])
		{
			if (tc[i][j] == '#')
			{
				(j != 0 && tc[i][j - 1] == '#') ? k++ : 0;
				(i != 0 && tc[i - 1][j] == '#') ? k++ : 0;
				(tc[i][j + 1] == '#') ? k++ : 0;
				(i < 3 && tc[i + 1][j] == '#') ? k++ : 0;
			}
			j++;
		}
		i++;
	}
	(k != 6 && k != 8) ? ft_quit() : 0;
	return (1);
}

int		check_buf2(int i, int j, int k, char *str)
{
	if (str[i - 1] != '\n' || (i < 20 || i > 21) || j != 4 ||
			(k != 5 && i == 21) || (k != 4 && i == 20))
	{
		return (0);
	}
	else
		return (1);
}

int		checknl(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (((i != 4 && i != 9 && i != 14 && i != 19 && i != 20) && str[i] ==
					'\n') || ((i == 4 || i == 9 || i == 14 || i == 19 || i ==
							20) && str[i] != '\n'))
			return (0);
		i++;
	}
	return (1);
}

int		check_buf(char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != 0)
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			ft_quit();
		if (str[i] == '#')
			j++;
		if (str[i] == '\n')
			k++;
		i++;
	}
	if ((check_buf2(i, j, k, str)) && checknl(str))
		return (1);
	ft_quit();
	return (0);
}
