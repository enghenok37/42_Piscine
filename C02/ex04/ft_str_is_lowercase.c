/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:13:01 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/19 13:35:58 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a') && (*str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

/* #include <stdio.h>

int main(void)
{
	char from[] = "dhdGhfhhshjsjsjsjfhd";
	int result;

	result = ft_str_is_lowercase(from);
	printf("only lowerAplha: %d \n",result);
	return (0);
}
 */