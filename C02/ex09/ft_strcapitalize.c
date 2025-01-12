/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  hmebraht < hmebraht@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:13:01 by  hmebraht         #+#    #+#             */
/*   Updated: 2024/11/20 14:26:01 by  hmebraht        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isnotalphnumeric(char c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
			|| (c >= '0' && c <= '9')))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*originalstr;
	int		capitalize;

	originalstr = str;
	capitalize = 1;
	while (*str)
	{
		if (capitalize && (*str >= 'a' && *str <= 'z'))
		{
			*str = *str - ('a' - 'A');
			capitalize = 0;
		}
		else if (!capitalize && (*str >= 'A' && *str <= 'Z'))
			*str = *str + ('a' - 'A');
		if (isnotalphnumeric(*str))
			capitalize = 1;
		else
			capitalize = 0;
		str++;
	}
	return (originalstr);
}

/* int main(void)
{
	char from[] = "salut, comment tu vas ? 42mots quarante-deux";
	char	*result;

	result = ft_strcapitalize(from);
	printf("heads up : %s \n",result);
	return (0);
} */