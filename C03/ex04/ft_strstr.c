/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:04:38 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/21 18:20:12 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*findptr;
	char	*sourceptr;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		sourceptr = str;
		findptr = to_find;
		while (*str && *findptr && (*str == *findptr))
		{
			str++;
			findptr++;
		}
		if (*findptr == '\0')
			return (sourceptr);
		str = sourceptr +1;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char	loca[50] = "This wa was here ";
	char from[] = "";
	printf("copied : %s \n",ft_strstr(loca, from));
	return (0);
}
 */