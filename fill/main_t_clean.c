/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main_t_clean.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 15:35:26 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 18:53:00 by mimignot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int	main(int ac, char **av)
{
	char			**bdd;
	t_tkind			**t;
	int				i;

	i = 0;
	bdd = ft_bdd_t();
	if (!(t = (t_tkind**)malloc(sizeof(t) * 27)))
		return (0);
	if (ac != 2)
	{
		ft_putstr("usage : ./fillit file\n");
		return (0);
	}
	reader(open(av[1], O_RDONLY), bdd, &i, t);
	free(bdd);
	presolver(t, i);
	return (0);
}
