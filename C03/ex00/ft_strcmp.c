/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:27:01 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/21 11:12:07 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] == s2[index]) && (s1[index] != '\0')
		&& (s2[index] != '\0'))
	{
		index ++;
	}
	return ((unsigned char) s1[index] - (unsigned char) s2[index]);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char from[] = "copy me, copy me !!!!Abb";
	char loca[] = "copy me, copy me !!!!Agggg";

	printf("result : %d\n",ft_strcmp(loca, from));
	printf("result : %d\n",strcmp(loca, from));

	return (0);
}
 */