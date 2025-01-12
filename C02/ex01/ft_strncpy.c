/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:33:25 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/19 21:06:01 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char				*destptr;
	unsigned int		i;

	destptr = dest;
	i = 0;
	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (destptr);
}

/* #include <stdio.h>

int main(void)
{
	char	loca[50];
	char from[] = "copy only until here. !!!";

	ft_strncpy(loca, from,20);
	printf("copied : %s \n",loca);
	return (0);
}
 */