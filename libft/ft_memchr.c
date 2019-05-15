/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 22:57:07 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 22:57:07 by mimignot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*st;
	unsigned char			uc;

	uc = (unsigned char)c;
	st = s;
	while (n--)
	{
		if (*st == uc)
			return ((void*)st);
		st++;
	}
	return (NULL);
}
