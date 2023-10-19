/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <mfassbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:27:40 by mfassbin          #+#    #+#             */
/*   Updated: 2023/10/19 19:51:13 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_iterate(void *ptr)
{
	(char *)ptr = "42";
}
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h> 

int main(void)
{
	t_list	*lista;

	lista = ft_lstnew("67");
	lista->next = ft_lstnew("85");
	lista->next->next = ft_lstnew("22");
	printf("%s\n", (char *)lista->content);
	ft_lstiter(lista, &ft_iterate);
	printf("%s\n", (char *)lista->content);
} */