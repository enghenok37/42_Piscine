/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:15:45 by hmebraht          #+#    #+#             */
/*   Updated: 2024/12/04 09:44:02 by hmebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

unsigned int	ft_strlen(char *str)
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

char	*ft_strdup(char *src)
{
	char			*duplicate;
	unsigned int	length;
	unsigned int	i;

	i = 0;
	length = ft_strlen(src);
	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	while (src[i])
	{
		duplicate[i] = src[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	original[] = "Hello, world!";
	char	*duplicate;

	duplicate = ft_strdup(original);
	if (duplicate != NULL)
	{
		printf("Original:%s\n", original);
		printf("Duplicate:%s\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
 */
