/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 22:57:07 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 22:57:07 by mimignot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	c;

	if (n < 0)
	{
		c = -n;
		ft_putchar_fd(('-'), fd);
	}
	else
		c = n;
	if (c >= 10)
	{
		ft_putnbr_fd((c / 10), fd);
		ft_putchar_fd(((c % 10) + '0'), fd);
	}
	else
		ft_putchar_fd((c + '0'), fd);
}
