/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:26:59 by hmebraht          #+#    #+#             */
/*   Updated: 2024/12/03 17:22:14 by hmebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	i;

	i = 0;
	length = max - min;
	if (length <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(length * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < length)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (length);
}

/* #include <stdio.h>

int	main(void)
{
	int	*numptr;
	int	val;
	int	i;

	i = 0;
	val = ft_ultimate_range(&numptr, 1, 1000000);
	if (numptr != NULL)
	{
		while (i < val)
		{
			printf("num: %d\n", numptr[i]);
			i++;
		}
		free(numptr);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
 */
