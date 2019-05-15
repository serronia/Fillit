/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 22:57:07 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 22:57:07 by mimignot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_sint(int n)
{
	int			i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	if (n == 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char			*r;
	int				s;
	unsigned int	i;

	s = ft_sint(n);
	if (!(r = malloc(sizeof(char) * s + 1)))
		return (NULL);
	r[s] = '\0';
	if (n < 0)
	{
		i = -n;
		r[0] = '-';
	}
	else
		i = n;
	if (i == 0)
		r[0] = '0';
	while (i)
	{
		r[s - 1] = i % 10 + 48;
		i = i / 10;
		s--;
	}
	return (r);
}
