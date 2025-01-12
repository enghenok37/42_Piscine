/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:04:38 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/21 12:34:50 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*destptr;

	destptr = dest;
	while (*dest)
		dest++;
	while (*src && nb > 0)
	{
		*dest = *src;
		src++;
		dest++;
		nb--;
	}
	*dest = '\0';
	return (destptr);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char	loca[50] = "This was here ";
	char from[] = "And this is added. not this";

	ft_strncat(loca, from,18);
	printf("copied : %s \n",loca);
	return (0);
}
 */