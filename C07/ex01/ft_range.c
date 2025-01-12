/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:56:53 by hmebraht          #+#    #+#             */
/*   Updated: 2024/12/04 09:55:58 by hmebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*numbers;
	int	range;
	int	i;

	i = 0;
	range = max - min;
	if (range <= 0)
		return (NULL);
	numbers = (int *)malloc(range * sizeof(int));
	if (numbers == NULL)
		return (NULL);
	while (i < range)
	{
		numbers[i] = min + i;
		i++;
	}
	return (numbers);
}
