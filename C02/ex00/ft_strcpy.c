/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:33:25 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/19 11:15:26 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*destptr;

	destptr = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (destptr);
}

/* #include <stdio.h>

int main(void)
{
	char	loca[50];
	char from[] = "copy me, copy me !!!";

	ft_strcpy(loca, from);
	printf("copied : %s \n",loca);
	return (0);
}
 */