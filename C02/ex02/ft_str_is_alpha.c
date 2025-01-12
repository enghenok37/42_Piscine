/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:52:02 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/19 12:20:53 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (! ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

/* #include <stdio.h>

int main(void)
{
	char from[] = "dhdhfhhshj sjsjsjfhd";
	int result;

	result = ft_str_is_alpha(from);
	printf("only alphabets: %d \n",result);
	return (0);
}
 */