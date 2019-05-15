/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 15:35:26 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 18:50:10 by mimignot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_t_check_c(char **t, int c)
{
	int	l;

	l = 0;
	while (l < 4)
	{
		if (t[l][c] == '#')
			return (0);
		l++;
	}
	return (1);
}

void	ft_t_set0c(char **t, int c)
{
	int	l;

	l = 0;
	while (l < 4)
	{
		if (t[l][c] == '.')
			t[l][c] = '0';
		l++;
	}
}

int		ft_t_check_l(char **t, int l)
{
	int c;

	c = 0;
	while (c < 4)
	{
		if (t[l][c] == '#')
			return (0);
		c++;
	}
	return (1);
}

void	ft_t_set0l(char **t, int l)
{
	int	c;

	c = 0;
	while (c < 5)
	{
		if (t[l][c] != '#')
			t[l][c] = '0';
		c++;
	}
}
