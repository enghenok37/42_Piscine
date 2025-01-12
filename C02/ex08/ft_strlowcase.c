/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:13:01 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/19 16:10:38 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*orginalstr;

	orginalstr = str;
	while (*str)
	{
		if ((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 'a' - 'A';
		}
		str++;
	}
	return (orginalstr);
}

/* #include <stdio.h>

int main(void)
{
	char from[] = "fhhFJFJFJFJFJJFJFV5473DMCMFM83NN4U594N49394JK1#$\%^";
	char	*result;

	result = ft_strlowcase(from);
	printf("lower them : %s \n",result);
	return (0);
} */
