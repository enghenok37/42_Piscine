/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:30:10 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/18 16:41:28 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*  #include <unistd.h>
#include <stdio.h>
int	main (void)
{
	int	num1;
	int	num2;

	num1 = 2434;
	num2 = 5656;
	printf(":%d,:%d", num1, num2);
	ft_swap(&num1, &num2);
	printf(":%d,:%d", num1, num2);
	return (0);
}
 */