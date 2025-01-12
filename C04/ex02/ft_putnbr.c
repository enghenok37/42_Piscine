/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:27:45 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/25 17:48:05 by hmebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned long	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

void	ft_reversestr(int *i, int *start, char *str)
{
	char	temp;

	while ((*start) < (--(*i)))
	{
		temp = str[(*start)];
		str[(*start)++] = str[(*i)];
		str[(*i)] = temp;
	}
}

void	ft_srtnbr(int nb, char *str)
{
	int	i;
	int	start;

	i = 0;
	str[i] = ' ';
	if (nb < 0)
	{
		str[i++] = '-';
		if (nb == -2147483648)
		{
			str[i++] = 2 + '0';
			nb = 147483648;
		}
		else
			nb = -nb;
	}
	start = i;
	while (nb > 0)
	{
		str[i++] = nb % 10 + '0';
		nb /= 10;
	}
	str[i] = '\0';
	ft_reversestr(&i, &start, str);
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
	write(1, str, ft_strlen(str));
}

/* int	main(void)
{
	ft_putnbr(-558);
	return (0);
}
 */
