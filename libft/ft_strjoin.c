/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 22:57:07 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 22:57:07 by mimignot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	r = ft_memalloc(ft_strlen(s1) + ft_strlen(s2));
	if (r == NULL)
		return (NULL);
	ft_strcpy(r, s1);
	ft_strcat(r, s2);
	return (r);
}
