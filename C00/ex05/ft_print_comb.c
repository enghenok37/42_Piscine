/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:01:15 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/17 12:03:53 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_prntnbr(int i, int j, int k)
{
	char	digit[3];

	digit[0] = i + '0';
	digit[1] = j + '0';
	digit[2] = k + '0';
	write (1, digit, 3);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_prntnbr (i, j, k);
				if (i != 7 || j != 8 || k != 9)
					write (1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}
