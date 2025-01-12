/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:02:23 by hmebraht          #+#    #+#             */
/*   Updated: 2024/11/27 11:59:30 by hmebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < (nb / 2 + 1))
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(400));
	return (0);
}
 */
