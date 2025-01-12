/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:48:56 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/15 10:31:18 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		num;
	char	ch;

	num = 0;
	while (num <= 9)
	{
		ch = num + '0';
		write(1, &ch, 1);
		num++;
	}
}
