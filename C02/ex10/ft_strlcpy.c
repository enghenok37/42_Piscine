/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:33:25 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/19 21:12:36 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	strleng;
	unsigned int	i;

	i = 0;
	strleng = 0;
	while (src[strleng] != '\0')
	{
		strleng++;
	}
	if (size > 0)
	{
		size = size - 1;
		while (i < size && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest [i] = '\0';
	}
	return (strleng);
}

/* #include <stdio.h>

int main(void)
{
	char	loca[50];
	int j = 0;
	char from[] = "copy me, copy me !!!";

	j = ft_strlcpy(loca, from,11);
	printf("copied %d: %s \n", j, loca);
	return (0);
}
 */