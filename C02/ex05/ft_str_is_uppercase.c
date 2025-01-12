/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:13:01 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/19 13:50:35 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A') && (*str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}

/* #include <stdio.h>

int main(void)
{
	char from[] = "GGGBBBHJUUHYGGFGKJHYGGFGFF";
	int result;

	result = ft_str_is_uppercase(from);
	printf("only lowerAplha: %d \n",result);
	return (0);
} */
