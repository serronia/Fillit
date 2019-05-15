/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 22:57:08 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 22:57:08 by mimignot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_w(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s[0] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] == c && s[i - 1] != c)
			j++;
	}
	if (s[i - 1] != c)
		j++;
	return (j);
}

static int	ft_size_w(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	int		j;
	int		w;
	char	**split;
	int		sw;

	j = 0;
	if (s == NULL)
		return (0);
	w = ft_count_w(s, (unsigned char)c);
	if (!(split = ft_memalloc(sizeof(char*) * (w + 1))))
		return (NULL);
	while (j < w)
	{
		while (*s == (unsigned char)c)
			s++;
		if (*s != (unsigned char)c)
		{
			sw = ft_size_w(s, (unsigned char)c);
			split[j] = ft_strnew(sw);
			ft_memcpy(split[j++], s, sw);
			s = s + sw;
		}
	}
	split[j] = NULL;
	return (split);
}
