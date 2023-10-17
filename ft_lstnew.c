/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <mfassbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:16:53 by mfassbin          #+#    #+#             */
/*   Updated: 2023/10/17 20:10:27 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}
/* 
#include <stdio.h>

int main(void)
{
	t_list	*lista;
	lista = malloc(sizeof(t_list));
	lista->content = "abc";
	lista ->next = NULL;
	printf("%s\n", (char *)lista->content);
	lista = ft_lstnew("Marcelo");
	printf("%s", (char *)lista->content);
} */