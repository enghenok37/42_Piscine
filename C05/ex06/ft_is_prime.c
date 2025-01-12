/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:30:40 by hmebraht          #+#    #+#             */
/*   Updated: 2024/11/27 12:13:57 by hmebraht         ###   ########.fr       */
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
/* #include <stdio.h>

int	main(void)
{
	printf("%d", ft_is_prime(1013));
	return (0);
}
 */
