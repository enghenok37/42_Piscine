/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:15:21 by hmebraht          #+#    #+#             */
/*   Updated: 2024/11/27 12:14:09 by hmebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	deviders;

	i = 1;
	deviders = 0;
	while (i < (nb / 2 + 1))
	{
		if (nb % i == 0)
		{
			deviders++;
		}
		i++;
	}
	if (deviders > 1 || nb <= 1)
		return (0);
	else
		return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb == 0 || nb == 1)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb))
	{
		ft_is_prime(nb++);
	}
	return (nb);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d", ft_find_next_prime(1010));
	return (0);
}
 */
