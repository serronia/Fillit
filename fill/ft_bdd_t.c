/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bdd_t.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 15:33:36 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/06 19:03:02 by jdarko      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_bdd_t(void)
{
	char	**bdd;

	if (!(bdd = ft_memalloc(sizeof(char*) * 20)))
		return (NULL);
	bdd[0] = ft_strdup("##\n##\n");
	bdd[1] = ft_strdup("##\n.#\n.#\n");
	bdd[2] = ft_strdup("##\n#.\n#.\n");
	bdd[3] = ft_strdup("###\n..#\n");
	bdd[4] = ft_strdup("###\n#..\n");
	bdd[5] = ft_strdup("####\n");
	bdd[6] = ft_strdup("#\n#\n#\n#\n");
	bdd[7] = ft_strdup("###\n.#.\n");
	bdd[8] = ft_strdup("#.\n##\n#.\n");
	bdd[9] = ft_strdup(".#.\n###\n");
	bdd[10] = ft_strdup(".#\n##\n.#\n");
	bdd[11] = ft_strdup(".##\n##.\n");
	bdd[12] = ft_strdup("#.\n##\n.#\n");
	bdd[13] = ft_strdup("##.\n.##\n");
	bdd[14] = ft_strdup(".#\n##\n#.\n");
	bdd[15] = ft_strdup(".#\n.#\n##\n");
	bdd[16] = ft_strdup("#.\n#.\n##\n");
	bdd[17] = ft_strdup("..#\n###\n");
	bdd[18] = ft_strdup("#..\n###\n");
	bdd[19] = NULL;
	return (bdd);
}

int			tcmp(char **bdd, char *str)
{
	int		i;

	i = 0;
	while (bdd[i] && (ft_strcmp(bdd[i], str) != 0))
	{
		i++;
	}
	return (i);
}

t_tkind		*ft_stock(int x, int i, int m)
{
	t_tkind *t;

	if (!(t = (t_tkind*)malloc(sizeof(*t))))
		exit(0);
	if (t)
	{
		t->x = x;
		t->a = 'A' + i;
		t->max = m;
	}
	return (t);
}
