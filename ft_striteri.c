/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <mfassbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:19:51 by mfassbin          #+#    #+#             */
/*   Updated: 2023/10/16 21:57:42 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	teste(unsigned int n, char *s)
{
	if (*s)
	s[n] = n + '0';
}
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	char			*new;

	new = ft_strdup(s);
	if (!new || !s || !f)
		return;
	i = 0;
	while (new[i])
	{
		f(i, &new[i]);
		i++;
	}
	ft_strlcpy(s, new, ft_strlen(new) + 1);
}
/* 
#include <stdio.h>

int main(void)
{
	char s[] = "Marcelo";
	printf("antes: %s\n", s);
	ft_striteri(s, teste);
	printf("depois: %s", s);
} */