/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:27:01 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/21 18:23:08 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && (s1[index] != '\0') && (s2[index] != '\0' ))
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index ++;
	}
	if (index != n)
	{
		return (s1[index] - s2[index]);
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char from[] = "copy me, copy me !!!!AA";
	char loca[] = "copy me, copy me !!!!Aaaaa";

	printf("result : %d\n",ft_strncmp(loca, from,24));
	printf("result : %d\n",strncmp(loca, from,24));

	return (0);
}
 */