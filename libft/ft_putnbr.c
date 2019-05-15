/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 22:57:07 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 22:57:07 by mimignot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr(int n)
{
	unsigned int	c;

	if (n < 0)
	{
		c = -n;
		ft_putchar('-');
	}
	else
		c = n;
	if (c >= 10)
	{
		ft_putnbr(c / 10);
		ft_putchar((c % 10) + '0');
	}
	else
		ft_putchar(c + '0');
}
