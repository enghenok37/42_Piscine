/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 11:42:25 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/25 14:52:11 by hmebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ismyspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	else
		return (0);
}

int	getsign(char **str)
{
	int	signcount;
	int	sign;

	signcount = 0;
	while (**str && ((**str == '+') || (**str == '-')))
	{
		if (**str == '-')
			signcount++;
		(*str)++;
	}
	if (signcount % 2 == 0)
	{
		sign = 1;
	}
	else
	{
		sign = -1;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	num = 0;
	while (*str && ismyspace(*str))
		str++;
	sign = getsign(&str);
	while (*str && (*str >= '0') && (*str <= '9'))
	{
		num = 10 * num + (*str - '0');
		str++;
	}
	num = num * sign;
	return (num);
}

/* #include <stdio.h>

int	main(void)
{
	char	str[] = " ---+--+1234ab567";

	printf("the number is :%d", ft_atoi(str));
	return (0);
} */
