/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 22:57:07 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 22:57:07 by mimignot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(char *src)
{
	char	*d;
	int		i;

	d = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (d == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
