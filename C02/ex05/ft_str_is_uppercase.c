/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngurskiy <ngurskiy@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:59:05 by ngurskiy          #+#    #+#             */
/*   Updated: 2023/11/11 20:05:20 by ngurskiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			c = 0;
		}
		i++;
	}
	return (c);
}

/*int main(void) {
	char str[] = "HoAJAJA";
	printf("%d", ft_str_is_uppercase(str));
	return (0);
}*/
