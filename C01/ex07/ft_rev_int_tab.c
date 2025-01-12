/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:23:55 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/18 16:44:31 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
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
	array[0] = 5;
	array[1] = 6;
	array[2] = 700;
	array[3] = 8;
	array[4] = 9;
	ft_rev_int_tab(array, length);
	while (i < length)
	{
		printf("%d ", array[i]);
		i++;
	}
	return (0);
} */
