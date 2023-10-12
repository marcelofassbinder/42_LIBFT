/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <mfassbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:39:04 by mfassbin          #+#    #+#             */
/*   Updated: 2023/10/12 20:51:43 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	result = NULL;
	if(s1 && set)
	{
		start = 0;
		end = ft_strlen(s1) - start;
		while (s1[start] && ft_strchr(s1, s1[start]))
		{
			start++;
		}
		while (s1[end -1] && ft_strchr(s1, s1[end - 1]))
		{
			end--;
		}
		result = (char *)malloc(sizeof(char)*(end - start + 1));
		if (!result )
			return(NULL);
		result = ft_substr(result, start, end- start +1);
	}
	return (result);
}

#include<stdio.h>

int	main(void)
{
	printf("%s\n", ft_strtrim("MaceloMar", "Mar"));
}