/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:04:32 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/18 16:42:29 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
	{
		*div = 0;
		*mod = 0;
	}
	else
	{
		*div = a / b;
		*mod = a % b;
	}
}
/* #include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 76676;
	num2 = 476;
	ft_div_mod(num1, num2, &num1, &num2);

	printf("division:%d,module:%d", num1, num2);
	return (0);
}
 */