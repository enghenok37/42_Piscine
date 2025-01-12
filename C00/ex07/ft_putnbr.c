/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:27:45 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/17 12:24:34 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_srtnbr(int nb, char *str)
{
	int		i;
	int		start;
	char	temp;

	i = 0;
	str[i] = ' ';
	if (nb < 0)
	{
		str[i++] = '-';
		nb = -nb;
	}
	start = i;
	while (nb > 0)
	{
		str[i++] = nb % 10 + '0';
		nb /= 10;
	}
	str[i] = '\0';
	while (start < --i)
	{
		temp = str[start];
		str[start++] = str[i];
		str[i] = temp;
	}
}

void	ft_putnbr(int nb)
{
	char	str[12];

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	ft_srtnbr(nb, str);
	write(1, str, sizeof(str));
}
/* 
int main (void){
	ft_putnbr(-2147483647);
	return (0);
} */