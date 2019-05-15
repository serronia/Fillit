/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   reader.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 15:35:26 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 19:53:41 by jdarko      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	reader(int fd, char **bdd, int *i, t_tkind **t)
{
	char	*buf;
	int		ret;
	char	*str;
	int		lret;

	if (!(buf = (char*)malloc(sizeof(char) * 22)))
		return ;
	while (((ret = read(fd, buf, 21)) != 0) && *i < 26)
	{
		buf[ret] = '\0';
		if (check_buf(buf) == 1)
		{
			if (!(ft_t_clean(buf)))
				exit(0);
			str = ft_strdup(ft_t_clean(buf));
			t[*i] = ft_stock(tcmp(bdd, str), *i, 0);
			free(str);
		}
		else
			exit(0);
		(*i)++;
		lret = ret;
	}
	ret == 0 && (*i == 0 || lret != 20) ? ft_quit() : 0;
	t[*i] = ft_stock(-1, -1, -1);
}
