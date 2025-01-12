/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:33:09 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/18 09:45:21 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	acopy;

	acopy = *a;
	if (*b == 0)
	{
		*a = 0;
		*b = 0;
	}
	else
	{
		*a /= *b;
		*b = acopy % *b;
	}
}
/* 
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 5;
	num2 = 2;
	ft_ultimate_div_mod(&num1, &num2);

	printf("division:%d,module:%d", num1, num2);
	return (0);
}
 */