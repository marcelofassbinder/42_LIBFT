/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <mfassbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:01:29 by mfassbin          #+#    #+#             */
/*   Updated: 2023/10/13 20:42:32 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	issep(const char *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
			n++;
		i++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		n;

	n = issep(s, c);
	result = malloc (sizeof(char *) * (n + 1));
	i = 0;
	j = 0;
	while (j < n + 1)
	{
		if (*s == c || *s == '\0')
		{
			result[j] = (char *)malloc(sizeof(char) * (i + 1));
			ft_strlcpy(result[j], &s[i], i + 1);
			j++;
			i = 0;
		}
		i++;
		s++;
	}
	return (result);
}

#include <stdio.h>

int main(void)
{
	char s[] = "ola tudo bem?";
	char **r = ft_split(s, ' ');
	
	printf("%s", r[0]);
}