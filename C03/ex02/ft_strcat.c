/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:04:38 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/21 12:27:03 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*destptr;

	destptr = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (destptr);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char	loca[50] = "This was here ";
	char from[] = "And this is added";

	ft_strcat(loca, from);
	printf("copied : %s \n",loca);
	return (0);
}
 */