/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngurskiy <ngurskiy@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:17:24 by ngurskiy          #+#    #+#             */
/*   Updated: 2023/11/11 19:37:03 by ngurskiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/* int main(void) {
//	char str[] = "HOLA me llamo NIKITA y me Ire A dormi ZasAsdASHBASDw";
	char str[] = "ABDSDF-sdfsdf,,sdfYU74rff;";
	printf("%s", ft_strlowcase(str));
	return (0);
}*/
