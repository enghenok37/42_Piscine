/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:15:12 by hmebraht          #+#    #+#             */
/*   Updated: 2024/12/03 17:07:17 by hmebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_mem_len(long *long_nbr, char *base, int *is_negative)
{
	int		base_len;
	int		len;
	long	temp;

	*is_negative = 0;
	len = 0;
	base_len = ft_strlen(base);
	if ((*long_nbr) < 0)
	{
		*is_negative = 1;
		(*long_nbr) = -(*long_nbr);
	}
	temp = (*long_nbr);
	while (temp > 0)
	{
		len++;
		temp /= base_len;
	}
	if (*is_negative)
		len++;
	if (len == 0)
		len = 1;
	return (len);
}

char	*ft_decimal_to_base(int nbr, char *base)
{
	long	long_nbr;
	int		is_negative;
	char	*result;
	int		i;
	int		len;

	long_nbr = nbr;
	len = ft_mem_len(&long_nbr, base, &is_negative);
	result = malloc(sizeof(char) * (len + 1));
	result[len] = '\0';
	i = len - 1;
	while (long_nbr > 0)
	{
		result[i--] = base[long_nbr % ft_strlen(base)];
		long_nbr /= ft_strlen(base);
	}
	if (is_negative)
		result[0] = '-';
	if (len == 1 && nbr == 0)
		result[0] = base[0];
	return (result);
}
