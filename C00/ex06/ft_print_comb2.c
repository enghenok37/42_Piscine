/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:09:03 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/17 12:08:09 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_cnvt_arr(int i, int j, char *c)
{
	c[0] = i / 10 + '0';
	c[1] = i % 10 + '0';
	c[2] = ' ';
	c[3] = j / 10 + '0';
	c[4] = j % 10 + '0';
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	c[7];

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_cnvt_arr(i, j, c);
			if (!(i == 98 && j == 99))
			{
				c[5] = ',';
				c[6] = ' ';
				write(1, c, 7);
			}
			else
			{
				write(1, c, 5);
			}
			j++;
		}
		i++;
	}
}

/* int	main(void)
{
	ft_print_comb2();
	return (0);
} */