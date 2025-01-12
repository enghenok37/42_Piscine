/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:06:17 by hmebraht          #+#    #+#             */
/*   Updated: 2024/12/03 19:55:56 by hmebraht         ###   ########.fr       */
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

char	*ft_emptystr(void)
{
	char	*str;

	str = (char *)malloc(1 * sizeof(char));
	*str = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int				i;
	unsigned int	totalstrlen;
	char			*joinedstr;

	totalstrlen = 0;
	i = 0;
	while (i < size)
	{
		totalstrlen = totalstrlen + ft_strlen(strs[i]);
		i++;
	}
	if (size == 0)
		return (ft_emptystr());
	totalstrlen = totalstrlen + ((size - 1) * ft_strlen(sep));
	joinedstr = (char *)malloc(sizeof(char) * (totalstrlen + 1));
	i = 0;
	*joinedstr = '\0';
	while (i < size)
	{
		ft_strcat(joinedstr, strs[i]);
		if (i < (size - 1))
			ft_strcat(joinedstr, sep);
		i++;
	}
	return (joinedstr);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*strs[] = {"Hello", "world", "!"};
	char	sep[] = ",";
	int		size;
	char	*result;

	size = 3;
	result = ft_strjoin(size, strs, sep);
	if (result != NULL)
	{
		printf("Joined string: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed!\n");
	}
	return (0);
}
 */
