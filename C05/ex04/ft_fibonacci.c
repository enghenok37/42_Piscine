/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:33:59 by hmebraht          #+#    #+#             */
/*   Updated: 2024/11/27 11:59:21 by hmebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmebraht <hmebraht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:13:33 by hmebraht          #+#    #+#             */
/*   Updated: 2024/11/26 13:33:15 by hmebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	firstcall;
	int	secondcall;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	firstcall = ft_fibonacci(index - 1);
	secondcall = ft_fibonacci(index - 2);
	return (firstcall + secondcall);
}

/* #include <stdio.h>

int	main(void)
{
	printf("Fibonacci :%d", ft_fibonacci(6));
	return (0);
}
 */
