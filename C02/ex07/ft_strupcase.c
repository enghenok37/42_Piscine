/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:13:01 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/19 15:10:32 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*orginalstr;

	orginalstr = str;
	while (*str)
	{
		if ((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str + 'A' - 'a';
		}
		str++;
	}
	return (orginalstr);
}

/* #include <stdio.h>

int main(void)
{
	char from[] = "asjnfhfhfmgjfghsfgpwuqz,bjndjduw2456988.zby5980faskel66";
	char	*result;

	result = ft_strupcase(from);
	printf("only printable: %s \n",result);
	return (0);
}
 */