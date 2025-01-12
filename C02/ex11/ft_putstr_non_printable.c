/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:13:01 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/19 20:38:16 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char			*hex;
	unsigned char	val ;
	char			div;
	char			mod;

	hex = "0123456789abcdef";
	while (*str)
	{
		if (!((*str >= 32) && (*str <= 126)))
		{
			val = (unsigned) *str;
			div = hex[val / 16];
			mod = hex[val % 16];
			ft_putchar('\\');
			ft_putchar(div);
			ft_putchar(mod);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
/* 
int main(void)
{
	char from[] = "nndfnfnnrfkm\x1fkv";

	ft_putstr_non_printable(from);
	return (0);
} */
