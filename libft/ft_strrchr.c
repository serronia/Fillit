/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 22:57:08 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 22:57:08 by mimignot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		p;
	char	*t;

	i = 0;
	p = -1;
	t = (char*)s;
	while (t[i] != '\0')
	{
		if (t[i] == (char)c)
			p = i;
		i++;
	}
	if ((char)c == '\0')
		return (t + i);
	else if (p == -1)
		return (NULL);
	else
		return (t + p);
}
