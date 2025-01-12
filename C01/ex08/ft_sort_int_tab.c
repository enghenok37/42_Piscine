/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:02:53 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/18 16:45:13 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	gap;
	int	j;

	gap = size / 2;
	while (gap > 0)
	{
		i = gap;
		while (i < size)
		{
			j = i - gap;
			while (j >= 0 && (tab[j] > tab[j + gap]))
			{
				temp = tab[j];
				tab[j] = tab[j + gap];
				tab[j + gap] = temp;
				j = j - gap;
			}
			i++;
		}
		gap = gap / 2;
	}
}
/*  #include <stdio.h>

int	main(void)
{
	int	array [5];
	int	length;
	int	i ;

	i = 0;
	length = 5;
	array[0] = 100;
	array[1] = 90;
	array[2] = 70;
	array[3] = 60;
	array[4] = 5;
	ft_sort_int_tab(array, length);
	while (i < length)
	{
		printf("   result : %d , ", array[i]);
		i++;
	}
	return (0);
} */
