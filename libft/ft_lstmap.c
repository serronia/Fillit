/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mimignot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 22:57:07 by mimignot     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 22:57:07 by mimignot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst_h;
	t_list	*lst_e;
	t_list	*lst_t;

	if (!lst || !f)
		return (NULL);
	lst_e = f(lst);
	if (!(lst_t = ft_lstnew(lst_e->content, lst_e->content_size)))
		return (NULL);
	lst_h = lst_t;
	lst = lst->next;
	while (lst)
	{
		lst_e = f(lst);
		if (!(lst_t->next = ft_lstnew(lst_e->content, lst_e->content_size)))
			return (NULL);
		lst_t = lst_t->next;
		lst = lst->next;
	}
	return (lst_h);
}
