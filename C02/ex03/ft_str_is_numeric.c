/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:24:10 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/19 13:11:50 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!((*str >= '0') && (*str <= '9')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/* #include <stdio.h>

int main(void)
{
	char from[] = "475567575757557575775";
	int result;

	result = ft_str_is_numeric(from);
	printf("only num: %d \n",result);
	return (0);
}
 */