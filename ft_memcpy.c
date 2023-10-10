/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <mfassbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:27:35 by mfassbin          #+#    #+#             */
/*   Updated: 2023/10/10 12:42:26 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dtr;
	char	*str;
	size_t	i;

	dtr = (char *)dest;
	str = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dtr[i] = str[i];
		i++;
	}
	return (dest);
}
/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
    char dest1[] = "";
    char dest2[] = "";
    char src1[] = "";
    char src2[] = "";
	size_t	n = 0;

	printf("minha funcao: %s\n", (char *)ft_memcpy(dest1, src1, n));
	printf("funcao original: %s\n", (char *)memcpy(dest2, src2, n));
} */