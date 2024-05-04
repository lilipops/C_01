/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngurskiy <ngurskiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:01:44 by ngurskiy          #+#    #+#             */
/*   Updated: 2023/11/11 18:58:14 by ngurskiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) && ((str[i - 1] > 90
					&& str[i - 1] < 97) || str[i - 1] > 122
				|| (str[i - 1] < 65 && str[i - 1] > 57) || str[i - 1] < 48))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int main(void) {
	char str[] = "salut, commEnt tu vas ? 42mots quaRante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
