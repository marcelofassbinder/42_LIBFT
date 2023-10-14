/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <mfassbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 23:13:39 by mfassbin          #+#    #+#             */
/*   Updated: 2023/10/15 00:13:04 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*result;
	long	nb;
	int		len;
	int		menos;

	nb = (long)n;
	len = 0;
	menos = 0;
	if (n < 0)
	{
		n = n *(-1);
		menos++;
	}
	while (n >= 1)
	{
		n = n / 10;
		len++; 	
	}
	result = (char *)ft_calloc(sizeof(char), len + menos + 1);
	if (!result)
		return (NULL);
	if(menos > 0)
	{
		result[0] = '-';
		nb = nb * (-1);	
		while (len > 0) 
		{
			result[len] = nb % 10 + '0';
			nb = nb / 10;
			len--;
		}
	}
	else
	{
		while (len--) 
		{
			result[len] = nb % 10 + '0';
			nb = nb / 10;
		}
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
} 