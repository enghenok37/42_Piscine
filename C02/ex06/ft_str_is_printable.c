/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:13:01 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/19 14:26:55 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!((*str >= 32) && (*str <= 126)))
			return (0);
		str++;
	}
	return (1);
}

/* #include <stdio.h>

int main(void)
{
	char from[] = "nndfnfnnrfkmgkv";
	int result;

	result = ft_str_is_printable(from);
	printf("only printable: %d \n",result);
	return (0);
}
 */