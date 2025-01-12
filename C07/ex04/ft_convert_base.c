/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:24:08 by hmebraht          #+#    #+#             */
/*   Updated: 2024/12/04 13:23:57 by hmebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str);
int		ft_base_to_decimal(char *str, char *base);
char	*ft_decimal_to_base(int nbr, char *base);

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

int	ftconvert_result(int *i, char *str, char *base, int base_len)
{
	int	digit;
	int	j;
	int	result;

	result = 0;
	while (str[(*i)])
	{
		digit = -1;
		j = 0;
		while (j < base_len)
		{
			if (str[(*i)] == base[j])
			{
				digit = j;
				break ;
			}
			j++;
		}
		if (digit == -1)
			break ;
		result = result * base_len + digit;
		(*i)++;
	}
	return (result);
}

int	ft_base_to_decimal(char *str, char *base)
{
	int	sign;
	int	i;
	int	result;
	int	base_len;

	sign = 1;
	i = 0;
	base_len = ft_strlen(base);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = ftconvert_result(&i, str, base, base_len);
	return (result * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	decimal;

	if (!ft_base(base_from) || !ft_base(base_to))
		return (NULL);
	decimal = ft_base_to_decimal(nbr, base_from);
	return (ft_decimal_to_base(decimal, base_to));
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*result;

	result = ft_convert_base("200", "0123456789", "0123456789abcdef");
	if (result)
		printf("Binary '' to Decimal:%s\n", result);
	else
		printf("Conversion failed.\n");
	free(result);
	return (0);
}
 */
