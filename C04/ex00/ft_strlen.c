/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 10:22:05 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/25 14:43:06 by hmebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned long	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "  ";

	printf("the stirng ccount :%d \n", ft_strlen(str));
	printf("the stirng ccount :%lu", strlen(str));
	return (0);
}
 */
