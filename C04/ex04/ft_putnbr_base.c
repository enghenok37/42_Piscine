/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:52:56 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/25 21:36:52 by hmebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

int	ft_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_nonpostive(long *lon)
{
	if ((*lon) < 0)
	{
		write(1, "-", 1);
		(*lon) = (*lon) * -1;
	}
	else
		write(1, "0", 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	lon;
	int		baselength;
	int		i;
	char	result[32];

	i = 0;
	if (!ft_base(base))
		return ;
	baselength = ft_strlen(base);
	lon = nbr;
	if (lon <= 0)
		ft_nonpostive(&lon);
	while (lon > 0)
	{
		result[i++] = base[lon % baselength];
		lon = lon / baselength;
	}
	while ((--i) >= 0)
		write(1, &result[i], 1);
}

/* int	main(void)
{
	char	*hex;
	int		num;

	hex = "0123456789ABCDEF";
	num = -2147483648;
	ft_putnbr_base(num, hex);
	return (0);
}
 */
